-- Function: some unit test for GameObjectSystem and part of demo based on this framework
-- Author  : Devvi
-- Data    : 2012.05.28
require "luaunit"
require "type"
require "scene1"
local assert = assert

TestGameObjectSystem = {} --class

-- add 10 gameobject, name according to current index time
-- see if the system has the gameObject affter creating

function TestGameObjectSystem:test1()
	local t = {}
	for i = 1, 100 do
		local go = gameObjectManager:createGameObject(tostring(i))
		table.insert(t, go)
	end
	
	for i = 1, 100 do
		assert_equals(t[i], gameObjectManager:getGameObject(tostring(i)))
	end
	
	-- clear resource
	for i = 1, 100 do
		gameObjectManager:releaseGameObject(tostring(i))
	end
end

-- create a go, then add a GCNode Component to this go,
-- see if the component got from go is the one we create above 

function TestGameObjectSystem:test2()
	local go = gameObjectManager:createGameObject("test2")
	local comp = gameComponentManager:createGameComponent(OGRENODE)
	go:addGC(comp)
	
	assert_equals(comp, go:getGC(OGRENODE))
	
	-- clear resource
	go:removeAllGC()
	gameObjectManager:releaseGameObject(go)
end

-- create two components with same type
-- then added to a same gameobject
-- see if the go get from the last component which was added to go is nil  

function TestGameObjectSystem:test3()
	local go = gameObjectManager:createGameObject("test3")
	local comp = gameComponentManager:createGameComponent(OGRENODE)
	go:addGC(comp)
	local comp_test = gameComponentManager:createGameComponent(OGRENODE)
	go:addGC(comp)
	go:addGC(comp_test)
	assert_equals(nil, comp_test:getGameObject())
	
	-- clear resource
	gameComponentManager:releaseGameComponent(comp_test)
	go:removeAllGC()
	gameObjectManager:releaseGameObject(go)
end

-- register a user component type and create one with this type, added to go
-- see if the go has this usertype component

function TestGameObjectSystem:test4()
	local go = gameObjectManager:createGameObject("test4")
	local USER_TYPE_TEST = 100000
	gameComponentManager:registerUserComponent(USER_TYPE_TEST, "USER_TYPE_TEST")
	
	local comp = gameComponentManager:createGameComponent(USER, USER_TYPE_TEST)
	go:addGC(comp)
	
	assert_equals(comp, go:getUserGC(USER_TYPE_TEST))
	
	-- clear resource
	go:removeAllGC()
	gameObjectManager:releaseGameObject(go)
end
--[[
-- test the camera
function TestGameObjectSystem:test5()
	sceneDirector = SceneDirector()
	local scene = {}
	scene.onEnterScene = function()
		if CameraStateManager.entered == nil then
			CameraStateManager.createCamera("CAMERA_MAIN")
		end
		scene.ninja = createPlayer("sceneNinja", Ogre.Vector3(-100, 500, -100), "ninja.mesh", "CelNinja", true)
	end
	scene.onExitScene = function()
		scene.ninja:destroySelf()
		scene.ninja = nil
	end
	scene.onKeyDown = function(arg)
		CameraStateManager.onKeyDown(arg)
	end
	scene.onKeyUp = function(arg)
		CameraStateManager.onKeyUp(arg)
	end
	scene.onMouseMoved = function(arg)
		CameraStateManager.onMouseMoved(arg)
	end
	scene.onMouseDown = function (arg, buttonId)	
	end

	scene.onMouseUp = function(arg, buttonId)
	end

	sceneDirector:addScene(scene)
end]]
LuaUnit:run() -- will execute all tests 