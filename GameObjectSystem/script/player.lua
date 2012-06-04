-- Function: The implementation of player coomponent
-- Author  : Devvi
-- Data    : 2012.05.15
require "type"
require "util"
require "commandprocess"
local oo = require "loop.simple"
local tolua = tolua
local tostring = tostring
local interval = FIXED_UPDATE_RATE

Player = oo.class{
comp = nil
}

function PlayerUpdate(comp)
	if comp.extra_data.AI then
		comp.extra_data.radius = comp.extra_data.radius + interval * math.pi 
		local go = comp:getGameObject()
		local gcNode = go:getGC(OGRENODE)
		tolua.cast(gcNode, "GCNode")
		gcNode:translate(Ogre.Vector3(0, 500 * math.sin(comp.extra_data.radius), 0))
		if math.abs(comp.extra_data.radius - math.pi) < 0.01 then
			comp.extra_data.radius = 0
		end
	end



	if comp.extra_data.alive == false then
		local go = comp:getGameObject()
		local eventHandler = go:getUserGC(EVENT_RECEIVER)
		if eventHandler ~= nil then
			removeInputListener(eventHandler)
		end
		daisy_object_set_lua_function(comp, "onUpdate", nil)
		gameObjectManager:releaseGameObject(go)
	end
end

function PlayerStartContacted(selfBody, comp, compOther, posSelf, posOther, normal)
	local go = comp:getGameObject()
	local userGC = go:getUserGC(PLAYER)
	if compOther:getCollisionID() == COL_BULLET then
		local goOther = compOther:getGameObject()
		local userOther = goOther:getUserGC(BULLET)
		userGC.extra_data.life = userGC.extra_data.life - userOther.extra_data.damage
		al_toShowLua("life: "..tostring(userGC.extra_data.life))
		if userGC.extra_data.life <= 0 then
			userGC.extra_data.alive = false
		end
		comp:impulse(normal * 1000)
	end
	--userGC.extra_data.AI = true
end

function PlayerContacting(selfBody, comp, compOther, posSelf, posOther, normal)
end



function Player:destroySelf()
	if self.go ~= nil and self:isAlive() == true then
		local eventHandler = self.go:getUserGC(EVENT_RECEIVER)
		if eventHandler ~= nil then
			removeInputListener(eventHandler)
		end
		self.go:removeAllGC()
		gameObjectManager:releaseGameObject(self.go)
	end
end
function Player:isAlive()
	if self.comp ~= nil then
		local res = self.comp.extra_data.alive
		return res
	else 
		return false
	end
end
function Player:translate(offset)
	local gcNode = self.go:getGC(OGRENODE)
	tolua.cast(gcNode, "GCNode")
	gcNode:translate(offset)
end
function Player:__init(comp, hp)
	local player = oo.rawnew(self, {})
	comp.extra_data = {}
	comp.extra_data.alive = true
	comp.extra_data.life = hp
	comp.extra_data.radius = 0
	player.comp = comp
	player.go = comp:getGameObject()
	
	return player
end

function createPlayer(name, pos, mesh, materialName, withoutPhysics, colType, hp, AI)
	local go = gameObjectManager:createGameObject(name)
	local gcUser = gameComponentManager:createGameComponent(USER, PLAYER)
	
	go:addGC(gcUser)
	
	local gcNode = gameComponentManager:createGameComponent(OGRENODE)
	tolua.cast(gcNode, "GCNode")
	gcNode:translate(pos) --"CelRobot"
	go:addGC(gcNode)
	
	local gcEntity = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntity, "GCEntity")
	gcEntity:initEntity(name, mesh);
	gcEntity:setMaterialName(materialName);
	go:addGC(gcEntity)
	
	local gcEventHandler = gameComponentManager:createGameComponent(USER, EVENT_RECEIVER)
	go:addGC(gcEventHandler)
	
	gcEventHandler.onKeyDown = function(self, arg)
		if arg.key == KC_C then
			if go:hasGC(PHYBODY) then
				self.phyBody = go:getGC(PHYBODY)
				go:removeGC(PHYBODY)
			end
		elseif arg.key == KC_R then
			if go:hasGC(PHYBODY) == false then
				local gcPhyBody = gameComponentManager:createGameComponent(PHYBODY)
				tolua.cast(gcPhyBody, "PhysicsBody")
				gcPhyBody:initBody(10000, COL_PLAYER, colType)
				gcPhyBody:setNeedCallBack(true) -- need callback to handle physics issues
				go:addGC(gcPhyBody)
				daisy_object_set_lua_function(gcPhyBody, "startContacted", PlayerStartContacted)
				daisy_object_set_lua_function(gcPhyBody, "contacting", PlayerContacting)
			end
		elseif arg.key == KC_K then
			if go:hasGC(PHYBODY) then
				local body = go:getGC(PHYBODY)
				body:impulse(Ogre.Vector3(0, -1000, 0))
			end
		end
	end
	
	gcEventHandler.onKeyUp = function(self, arg)
		
	end
	gcEventHandler.onMouseMoved = function(self, arg)end
	gcEventHandler.onMouseDown = function(self, arg, buttonId)end
	gcEventHandler.onMouseUp = function(self, arg, buttonId)end
	
	addInputListender(gcEventHandler)
	
	
	
	local player = Player(gcUser, hp)
	if withoutPhysics then
	else
		local gcPhyBody = gameComponentManager:createGameComponent(PHYBODY)
		tolua.cast(gcPhyBody, "PhysicsBody")
		gcPhyBody:initBody(10000, COL_PLAYER)
		gcPhyBody:setNeedCallBack(true) -- need callback to handle physics issues
		go:addGC(gcPhyBody)
		daisy_object_set_lua_function(gcPhyBody, "startContacted", PlayerStartContacted)
		daisy_object_set_lua_function(gcPhyBody, "contacting", PlayerContacting)
	end
	
	gcUser.extra_data.AI = AI
	daisy_object_set_lua_function(gcUser, "onUpdate", PlayerUpdate)
	
	
	return player
end





	