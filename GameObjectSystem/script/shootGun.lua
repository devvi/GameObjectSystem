require "type"
require "util"
require "commandprocess"
local oo = require "loop.simple"
local interval = FIXED_UPDATE_RATE
local tolua = tolua
local tostring = tostring
local os = os
local random = random
local math = math

ShootGun = oo.class{
comp = nil
}

function ShootGun:onKeyDown(arg)
	
end

function ShootGun:onKeyUp(arg)
	
end

function ShootGun.update(comp)
	local data = comp.extra_data
	if data.beginHold then
		data.timer = data.timer + interval
	end
end

function ShootGun:onMouseMoved(arg)
	
end

function ShootGun:onMouseDown(arg, buttonId)
	if buttonId == MB_Left then
		local data = self.comp.extra_data
		data.beginHold = true
	end
end

function ShootGun:onMouseUp(arg, buttonId)
	if buttonId == MB_Left then
		local data = self.comp.extra_data
		local camera = ogreManager:getCamera("CAMERA_MAIN")
		data.beginHold = false
		local direction = camera:getDirection()
		local initPos = camera:getPosition()
		
		local scaleOff = 20 * (data.timer/10)
		if scaleOff > 20 then
			scaleOff = 20
		elseif scaleOff == 0 then
			scaleOff = 0.1
		end
		data.timer = 0
		self:fire(initPos, direction, scaleOff) -- launch bullet
	end
end

function ShootGun:__init(name)
	local gun = oo.rawnew(self, {})
	local go = gameObjectManager:createGameObject(name)
	local userGC = gameComponentManager:createGameComponent(USER ,SHOOT_GUN)
	go:addGC(userGC)
	userGC.extra_data = {}
	userGC.extra_data.timer = 0
	userGC.extra_data.beginHold = false
	gun.bulletCount = 30
	gun.damage = 100
	gun.power = 100000
	daisy_object_set_lua_function(userGC, "onUpdate", gun.update)
	addInputListender(gun)
	gun.comp = userGC
	return gun
end

function ShootGun:fire(initPos, direction, scaleOff)
	local bulletGo = gameObjectManager:createGameObject("bullet"..tostring(os.time())..tostring(math.random(1,100000)))
	local node = gameComponentManager:createGameComponent(OGRENODE)
	tolua.cast(node, "GCNode")
	node:translate(Ogre.Vector3(initPos.x, initPos.y, initPos.z))
	node:scale(scaleOff, scaleOff, scaleOff)
	bulletGo:addGC(node)
	
	local gcEntity = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntity, "GCEntity")
	gcEntity:initEntity("bullet"..tostring(os.time())..tostring(math.random(1,1000)), "sphere.mesh")
	gcEntity:setMaterialName("CelBullet")
	bulletGo:addGC(gcEntity)
	
	local gcPhyBody = gameComponentManager:createGameComponent(PHYBODY)
	tolua.cast(gcPhyBody, "PhysicsBody")
	gcPhyBody:initBody(100, COL_BULLET)
	bulletGo:addGC(gcPhyBody)
	
	gcPhyBody:impulse(direction * self.power)
	
	
	local gcUser = gameComponentManager:createGameComponent(USER, BULLET)
	bulletGo:addGC(gcUser)
	gcUser.extra_data = {}
	gcUser.extra_data.damage = self.damage
	
	daisy_object_set_lua_function(gcUser, "onUpdate", function(comp)
			if comp.timer == nil then
				comp.timer = 0
			end
			comp.timer = interval + comp.timer
			if comp.timer > 15 then
				local go = comp:getGameObject()	
				gameObjectManager:releaseGameObject(go)
				
			end
		end)
	
end

function destroyShootGun(shootGun)
	removeInputListener(shootGun)
	local go = shootGun.comp:getGameObject()
	go:removeAllGC()
	gameObjectManager:releaseGameObject(go)
end