require "type"
require "util"
require "commandprocess"
local oo = require "loop.simple"
local tolua = tolua
local tostring = tostring
local ipairs = ipairs

-- call back for scene
-- onExitScene onEnterScene onLeaveTop onGrabTop


SceneDirector = oo.class{}

function SceneDirector:__init()
	local director = oo.rawnew(self, {})
	director.SceneStack = {}
	addInputListender(director)
	return director
end

function SceneDirector:addScene(scene)
	scene.SceneDirector = self
	
	if #self.SceneStack == 0 then
		scene.onEnterScene()
		table.insert(self.SceneStack, scene)
	else
		local currScene = self.SceneStack[#self.SceneStack]
		currScene:onExitScene(scene)
		scene:onEnterScene(currScene)
		table.insert(self.SceneStack, scene)
	end
end

function SceneDirector:popScene()
	local currScene = self.SceneStack[#self.SceneStack]
	if currScene ~= nil then
		local nextScene = self.SceneStack[#self.SceneStack - 1]
		if nextScene ~= nil then
			if currScene.onLeaveTop ~= nil then
				currScene:onLeaveTop(nextScene)
			else
				currScene:onExitScene(nextScene)
			end
		else
			if currScene.onLeaveTop ~= nil then
				currScene:onLeaveTop()
			else
				currScene:onExitScene()
			end
		end
		
		if nextScene ~= nil then
			if nextScene.onGrabTop ~= nil then
				nextScene:onGrabTop(currScene)
			else
				nextScene:onEnterScene(currScene)
			end
		end
		
		table.remove(self.SceneStack)
		
	end
	
end

function SceneDirector:onKeyDown(arg)
	local currScene = self.SceneStack[#self.SceneStack]
	if currScene ~= nil then
		currScene.onKeyDown(arg)
	end
end

function SceneDirector:onKeyUp(arg)
	local currScene = self.SceneStack[#self.SceneStack]
	if currScene ~= nil then
		currScene.onKeyUp(arg)
	end
	
end

function SceneDirector:onMouseMoved(arg)
	local currScene = self.SceneStack[#self.SceneStack]
	if currScene ~= nil then
		currScene.onMouseMoved(arg)
	end
end

function SceneDirector:onMouseDown(arg, buttonId)
	local currScene = self.SceneStack[#self.SceneStack]
	if currScene ~= nil then
		currScene.onMouseDown(arg, buttonId)
	end
end

function SceneDirector:onMouseUp(arg, buttonId)
	local currScene = self.SceneStack[#self.SceneStack]
	if currScene ~= nil then
		currScene.onMouseUp(arg, buttonId)
	end
end


