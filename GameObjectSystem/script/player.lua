require "type"
require "util"
require "commandprocess"
local oo = require "loop.simple"
local tolua = tolua
local tostring = tostring


Player = oo.class{
comp = nil
}

function Player:update(comp)
	--[[local gcNode = comp:getGameObject():getGC(OGRENODE)
	tolua.cast(gcNode, "GCNode")
	
	gcNode:translate( Ogre.Vector3(0, 0, 1/60));]]
	
end

function Player:startContacted(comp, compOther, posSelf, posOther, normal)
	writeLog("player startContacted comp: "..tostring(comp))
end

function Player:contacting(comp, compOther, posSelf, posOther, normal)
	writeLog("player contacting comp: "..tostring(comp))
end

function Player:onKeyDown(arg)
	writeLog("Player:onKeyDown  arg"..tostring(arg))
	local go = self.comp:getGameObject()
	if arg.key == KC_C then
		self.phyBody = go:getGC(PHYBODY)
		go:removeGC(PHYBODY)
	elseif arg.key == KC_R then
		if self.phyBody ~= nil then
		go:addGC(self.phyBody)
		end
	elseif arg.key == KC_K then
		local body = go:getGC(PHYBODY)
		body:impulse(Ogre.Vector3(0, -10000, 0))
	end
end

function Player:onKeyUp(arg)
	writeLog("Player:onKeyUp  arg"..tostring(arg))
end

function Player:onMouseMoved(arg)
	writeLog("Player:onMouseMoved  arg"..tostring(arg))
end

function Player:onMouseDown(arg, buttonId)
	writeLog("Player:onMouseDown  arg"..tostring(arg))
end

function Player:onMouseUp(arg, buttonId)
	writeLog("Player:onMouseUp  arg"..tostring(arg))
end
function Player:destroySelf()
	self.comp:getGameObject():removeAllGC()
	gameObjectManager:releaseGameObject("player")
end

function Player:__init(comp)
	local player = oo.rawnew(self, {})
	comp.extra_data = {}
	comp.extra_data.alive = true
	comp.extra_data.started = false
	comp.extra_data.contactingFixtures = {}
    comp.extra_data.manualVelocity = false
    comp.extra_data.velocity = {x = 0, y = 0, z = 0}
	addInputListender(player)
	player.comp = comp
	player.go = comp:getGameObject()
	
	return player
end

function createPlayer()
	local go = gameObjectManager:createGameObject("player")
	local gcUser = gameComponentManager:createGameComponent(USER, PLAYER)
	go:addGC(gcUser)
	
	local gcNode = gameComponentManager:createGameComponent(OGRENODE)
	go:addGC(gcNode)
	
	local gcEntity = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntity, "GCEntity")
	gcEntity:initEntity("robot", "robot.mesh");
	gcEntity:setMaterialName("CelRobot");
	go:addGC(gcEntity)
	
	
	local gcPhyBody = gameComponentManager:createGameComponent(PHYBODY)
	tolua.cast(gcPhyBody, "PhysicsBody")
	gcPhyBody:initBody(100, COL_PLAYER)
	go:addGC(gcPhyBody)
	
	writeLog("createPlayer")
	
	local player = Player(gcUser)
	daisy_object_set_lua_function(gcUser, "onUpdate", player.update)
	--daisy_object_set_lua_function(gcPhyBody, "startContacted", player.startContacted)
	--daisy_object_set_lua_function(gcPhyBody, "contacting", player.contacting)
	
	return player
end

	