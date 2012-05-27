require "type"
require "util"
require "commandprocess"
local oo = require "loop.simple"
local tolua = tolua
local tostring = tostring


Player = oo.class{
comp = nil
}

function Player.update(comp)
	--[[local gcNode = comp:getGameObject():getGC(OGRENODE)
	tolua.cast(gcNode, "GCNode")
	
	gcNode:translate( Ogre.Vector3(0, 0, 1/60));]]
	--al_toShowLua("player updating "..tostring(comp).." "..tolua.type(comp))
	
end

function Player:startContacted(comp, compOther, posSelf, posOther, normal)
	
	
end

function Player:contacting(comp, compOther, posSelf, posOther, normal)
	-- al_toShowLua("player contacting comp: "..tostring(comp))
	-- al_toShowLua("player contacting comp: "..tostring(compOther))
end

function Player:onKeyDown(arg)
	writeLog("Player:onKeyDown  arg"..tostring(arg))
	local go = self.go
	
	if arg.key == KC_C then
		if go:hasGC(PHYBODY) then
			self.phyBody = go:getGC(PHYBODY)
			go:removeGC(PHYBODY)
		end
	elseif arg.key == KC_R then
		if go:hasGC(PHYBODY) == false then
			local gcPhyBody = gameComponentManager:createGameComponent(PHYBODY)
			tolua.cast(gcPhyBody, "PhysicsBody")
			gcPhyBody:initBody(10000, COL_PLAYER)
			gcPhyBody:setNeedCallBack(true) -- need callback to handle physics issues
			go:addGC(gcPhyBody)
			daisy_object_set_lua_function(gcPhyBody, "startContacted", self.startContacted)
			daisy_object_set_lua_function(gcPhyBody, "contacting", self.contacting)
		end
	elseif arg.key == KC_K then
		if go:hasGC(PHYBODY) then
			local body = go:getGC(PHYBODY)
			body:impulse(Ogre.Vector3(0, -1000, 0))
		end
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
	removeInputListener(self)
	self.go:removeAllGC()
	gameObjectManager:releaseGameObject(self.go)
end

function Player:__init(comp)
	local player = oo.rawnew(self, {})
	comp.extra_data = {}
	comp.extra_data.alive = true
	addInputListender(player)
	player.comp = comp
	player.go = comp:getGameObject()
	
	return player
end

function createPlayer(name, pos, mesh, materialName)
	local go = gameObjectManager:createGameObject(name)
	local gcUser = gameComponentManager:createGameComponent(USER, PLAYER)
	go:addGC(gcUser)
	
	local gcNode = gameComponentManager:createGameComponent(OGRENODE)
	tolua.cast(gcNode, "GCNode")
	gcNode:translate(pos) --"CelRobot"
	go:addGC(gcNode)
	
	local gcEntity = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntity, "GCEntity")
	gcEntity:initEntity(mesh, mesh);
	gcEntity:setMaterialName(materialName);
	go:addGC(gcEntity)
	
	
	local gcPhyBody = gameComponentManager:createGameComponent(PHYBODY)
	tolua.cast(gcPhyBody, "PhysicsBody")
	gcPhyBody:initBody(10000, COL_PLAYER)
	gcPhyBody:setNeedCallBack(true) -- need callback to handle physics issues
	go:addGC(gcPhyBody)
	
	
	local player = Player(gcUser)
	--daisy_object_set_lua_function(gcUser, "onUpdate", player.update)
	daisy_object_set_lua_function(gcPhyBody, "startContacted", player.startContacted)
	daisy_object_set_lua_function(gcPhyBody, "contacting", player.contacting)
	
	return player
end





	