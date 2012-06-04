-- Function: Scene1 and Scene2,the concrete implementation of scene and CameraManager
-- Author  : Devvi
-- Data    : 2012.05.15
require "player"
require "sceneDirector"
require "type"
require "shotGun"
local math = math
local interval = FIXED_UPDATE_RATE
local maxSizeLevel1 = 25
local maxSizeLevel2 = 50
sceneInit = {}

scene1 = {}

scene2 = {}


CameraStateManager = {}

function CameraStateManager.onKeyDown(arg)
	if arg.key == KC_W then
		CameraStateManager.mGoingForward = true
	elseif arg.key == KC_S then
		CameraStateManager.mGoingBack = true
	elseif arg.key == KC_A then
		CameraStateManager.mGoingLeft = true
	elseif arg.key == KC_D then
		CameraStateManager.mGoingRight = true
	elseif arg.key == KC_LSHIFT then
		CameraStateManager.shift = true
	end
end

function CameraStateManager.onKeyUp(arg)
	if arg.key == KC_W then
		CameraStateManager.mGoingForward = false
	elseif arg.key == KC_S then
		CameraStateManager.mGoingBack = false
	elseif arg.key == KC_A then
		CameraStateManager.mGoingLeft = false
	elseif arg.key == KC_D then
		CameraStateManager.mGoingRight = false
	elseif arg.key == KC_LSHIFT then
		CameraStateManager.shift = false
	end
	if arg.key == KC_L then
		local mCamera = CameraStateManager.camera
		local pos = mCamera:getPosition()
		al_toShowLua(tostring(pos.x).." "..tostring(pos.y).." "..tostring(pos.z))
	end
end

function CameraStateManager.onMouseMoved(arg)
	local mCamera = CameraStateManager.camera
	mCamera:yaw(Ogre.Radian(Ogre.Degree(-arg.state.X.rel * 0.15)))
	mCamera:pitch(Ogre.Radian(Ogre.Degree(-arg.state.Y.rel * 0.15)))
end

function CameraStateManager.onMouseDown(arg, buttonId)
	
end

function CameraStateManager.onMouseUp(arg, buttonId)
	
end
function CameraStateManager.update(comp)
	local mCamera = CameraStateManager.camera
	local mShift = CameraStateManager.shift
	local accel = Ogre.Vector3.ZERO;
	local mVelocity = CameraStateManager.mVelocity
	
	
	if CameraStateManager.mGoingForward then
		accel = accel + mCamera:getDirection()
	end
	if CameraStateManager.mGoingBack then
		accel = accel - mCamera:getDirection()
	end
	if CameraStateManager.mGoingRight then
		accel = accel + mCamera:getRight()
	end
	if CameraStateManager.mGoingLeft then
		accel = accel - mCamera:getRight()
	end

	local topSpeed
	
	if mShift then
		topSpeed = 20 * 150
	else
		topSpeed = 150
	end
	
	if accel:squaredLength() ~= 0 then
		accel:normalise()
		mVelocity = mVelocity + ( accel * topSpeed  * 10 * interval)
	else 
		mVelocity = mVelocity - ( mVelocity * interval * 10)
	end

	if mVelocity:squaredLength() > topSpeed * topSpeed then
		mVelocity:normalise()
		mVelocity =	mVelocity * topSpeed
	elseif mVelocity:squaredLength() < 0.001 then
		mVelocity = Ogre.Vector3.ZERO
	end
	
	if mVelocity ~= Ogre.Vector3.ZERO then
		mCamera:move(mVelocity * interval)
	end		
end
function CameraStateManager.setPosition(pos)
	local mCamera = CameraStateManager.camera
	mCamera:setPosition(pos)
end
function CameraStateManager.getPosition()
	local mCamera = CameraStateManager.camera
	return mCamera:getPosition()
end
function CameraStateManager.getDirection()
	local mCamera = CameraStateManager.camera
	return mCamera:getDirection()
end
function CameraStateManager.setDirection(pos)
	local mCamera = CameraStateManager.camera
	return mCamera:setDirection(pos)
end
function CameraStateManager.createCamera(name)
	local go =gameObjectManager:createGameObject(name)
	if go == nil then
		go = gameObjectManager:getGameObject(name)
		go:removeAllGC()
	end
	CameraStateManager.go = go
	
	local userGC = gameComponentManager:createGameComponent(USER, CAM_MAIN)
	go:addGC(userGC)
	
	daisy_object_set_lua_function(userGC, "onUpdate", CameraStateManager.update)
	
	local camera = ogreManager:createCamera(name)
	camera:setPosition(Ogre.Vector3(0,1500, 0))
	ogreManager:setCurrentCamera(camera)
	CameraStateManager.camera = camera
	userGC.camera = camera
	CameraStateManager.mVelocity = Ogre.Vector3.ZERO
	camera:setFixedYawAxis(true)
	CameraStateManager.entered = true
end

local function intergratePhysics(go, mass)
	if go ~= nil then
		local phyBody = gameComponentManager:createGameComponent(PHYBODY)
		tolua.cast(phyBody, "PhysicsBody")
		phyBody:initBody(mass, COL_LETTER)
		go:addGC(phyBody)
	end
end
local function buildLetter(name, meshName)
	local letter =  gameObjectManager:createGameObject(name)
	local gcNodeLetter = gameComponentManager:createGameComponent(OGRENODE)
	tolua.cast(gcNodeLetter, "GCNode")
	local gcEntityLetter = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntityLetter, "GCEntity")
	gcEntityLetter:initEntity(meshName, meshName)
	gcEntityLetter:setMaterialName("CelLetter")
	letter:addGC(gcNodeLetter)
	letter:addGC(gcEntityLetter)
	return letter
end
function sceneInit:onEnterScene()
	ogreManager:setBackGroundColor(Ogre.ColourValue(0.0, 1.0, 0.0))
	
	sceneInit.letterD = buildLetter("LETTER_D", "letter_D.mesh")
	local node = sceneInit.letterD:getGC(OGRENODE)
	node:translate(Ogre.Vector3(-60, 1500, 60))
	sceneInit.letterE = buildLetter("LETTER_E", "letter_E.mesh")
	node = sceneInit.letterE:getGC(OGRENODE)
	node:translate(Ogre.Vector3(-20, 1500, 60))
	sceneInit.letterM = buildLetter("LETTER_M", "letter_M.mesh")
	node = sceneInit.letterM:getGC(OGRENODE)
	node:translate(Ogre.Vector3(30, 1500, 60))
	sceneInit.letterO = buildLetter("LETTER_O", "letter_O.mesh")
	node = sceneInit.letterO:getGC(OGRENODE)
	node:translate(Ogre.Vector3(80, 1500, 60))
	if CameraStateManager.entered == nil then
		CameraStateManager.createCamera("CAMERA_MAIN")
	end
	CameraStateManager.setPosition(Ogre.Vector3(-75, 1542, 193))
	CameraStateManager.setDirection(Ogre.Vector3(0.46416411399841, -0.091503530740738, -0.92683011293411))
end

function sceneInit:onExitScene(nextScene)
	if nextScene ~= nil then
		nextScene.letterD = sceneInit.letterD
		nextScene.letterE = sceneInit.letterE
		nextScene.letterM = sceneInit.letterM
		nextScene.letterO = sceneInit.letterO
	end
end

function sceneInit.onKeyDown(arg)
	if arg.key == KC_P then
		sceneInit.SceneDirector:addScene(scene1)
	end
end

function sceneInit.onKeyUp(arg)
end

function sceneInit.onMouseMoved(arg)
	CameraStateManager.onMouseMoved(arg)
end

function sceneInit.onMouseDown(arg, buttonId)
end

function sceneInit.onMouseUp(arg, buttonId)
	
end

function scene1:onEnterScene(lastScene)
	al_toShowLua("onEnterScene1")
	-- ogreManager:setBackGroundColor(Ogre.ColourValue(0.0, 0.0, 1.0))
	--local light = ogreManager:createLight(Ogre.Light.LT_POINT)
	--light:setPosition(Ogre.Vector3(1000,1000,1000))
	--scene1.light = light
	--ogreManager:setSkyDome( true, "Examples/CloudySky");
	--ogreManager:setAmbientColor(Ogre.ColourValue(0.9, 0.9, 0.9))
	
	local floorgo = gameObjectManager:createGameObject("FLOOR_TERRAIN")
	local gcNode = gameComponentManager:createGameComponent(OGRENODE)
	local gcEntity = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntity, "GCEntity")
	ogreManager:createPlaneMesh(TERRAIN_SIZE, TERRAIN_SIZE, "floor")
	gcEntity:initEntity("floor", "floor")
	gcEntity:setMaterialName("CelRockwallBlue")
	local phyBody = gameComponentManager:createGameComponent(PHYBODY)
	tolua.cast(phyBody, "PhysicsBody")
	phyBody:initBody(0, COL_TERRAIN, CF_STATIC_OBJECT)
	floorgo:addGC(gcNode)
	floorgo:addGC(gcEntity)
	floorgo:addGC(phyBody)
	
	
	
	local floorgoLeft = gameObjectManager:createGameObject("FLOOR_TERRAIN_LEFT")
	local gcNodeLeft = gameComponentManager:createGameComponent(OGRENODE)
	tolua.cast(gcNodeLeft, "GCNode")
	gcNodeLeft:roll(90)
	gcNodeLeft:translate(Ogre.Vector3(TERRAIN_SIZE/2, TERRAIN_SIZE/2, 0))
	local gcEntityLeft = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntityLeft, "GCEntity")
	ogreManager:createPlaneMesh(TERRAIN_SIZE, TERRAIN_SIZE, "floor_left")
	gcEntityLeft:initEntity("floor_left", "floor_left")
	gcEntityLeft:setMaterialName("CelRockwallRed")
	local phyBodyLeft = gameComponentManager:createGameComponent(PHYBODY)
	tolua.cast(phyBodyLeft, "PhysicsBody")
	phyBodyLeft:initBody(0, COL_TERRAIN, CF_STATIC_OBJECT)
	floorgoLeft:addGC(gcNodeLeft)
	floorgoLeft:addGC(gcEntityLeft)
	floorgoLeft:addGC(phyBodyLeft)
	
	local floorgoRight = gameObjectManager:createGameObject("FLOOR_TERRAIN_RIGHT")
	local gcNodeRight = gameComponentManager:createGameComponent(OGRENODE)
	tolua.cast(gcNodeRight, "GCNode")
	gcNodeRight:pitch(90)
	gcNodeRight:translate(Ogre.Vector3(0, TERRAIN_SIZE/2, -TERRAIN_SIZE/2))
	local gcEntityRight = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntityRight, "GCEntity")
	ogreManager:createPlaneMesh(TERRAIN_SIZE, TERRAIN_SIZE, "floor_right")
	gcEntityRight:initEntity("floor_right", "floor_right")
	gcEntityRight:setMaterialName("CelRockwallGreen")
	local phyBodyRight = gameComponentManager:createGameComponent(PHYBODY)
	tolua.cast(phyBodyRight, "PhysicsBody")
	phyBodyRight:initBody(0, COL_TERRAIN, CF_STATIC_OBJECT)
	floorgoRight:addGC(gcNodeRight)
	floorgoRight:addGC(gcEntityRight)
	floorgoRight:addGC(phyBodyRight)
	
	
	
	
	
	
	scene1.terrainGo = floorgo
	scene1.floorgoLeft = floorgoLeft
	scene1.floorgoRight = floorgoRight
	
	if CameraStateManager.entered == nil then
		CameraStateManager.createCamera("CAMERA_MAIN")
	end
	al_toShowLua("debug :"..tostring(lastScene.letterD))
	intergratePhysics(scene1.letterD, 1000)
	intergratePhysics(scene1.letterE, 800)
	intergratePhysics(scene1.letterM, 600)
	intergratePhysics(scene1.letterO, 400)
	
	local shotGun = ShotGun("shootgun1")
	scene1.shotGun = shotGun
	
	ogreManager:setBackGroundColor(Ogre.ColourValue(0.5, 0.5, 0.5))
	ogreManager:setAmbientColor(Ogre.ColourValue(0.7, 0.7, 0.7))
	-- scene1.robot = createPlayer("scenePlayer1", Ogre.Vector3(100, 500, 100), "simba.mesh", "CelSimba")
	scene1.actors = {}
	local origin  = Ogre.Vector3(0, TERRAIN_SIZE, 0)
	local r = TERRAIN_SIZE/2 - 200
	
	local s = maxSizeLevel1
	for i = 1, maxSizeLevel1 do
		local x = origin.x + r * math.cos( (360/maxSizeLevel1) * i )
		local z = origin.z + r * math.sin( (360/maxSizeLevel1) * i )
		local ninja = createPlayer("sceneNinja1"..tostring(i), Ogre.Vector3(x, origin.y, z), "ninja.mesh", "CelNinja", nil, CF_DEFAULT, 100)
		table.insert(scene1.actors, ninja)
	end
	local ninja = createPlayer("sceneSmartNinja1", origin, "ninja.mesh", "CelNinja", nil, CF_KINEMATIC_OBJECT, 50, true)
	scene1.ninja = ninja
end

function scene1:onExitScene()
	for i = 1, maxSizeLevel1 do
		local actor = scene1.actors[i]
		actor:destroySelf()
		actor = nil
	end
	scene1.ninja:destroySelf()
	scene1.ninja = nil
	destroyShootGun(scene1.shotGun)
	scene1.shotGun = nil
	
	scene1.terrainGo:removeAllGC()
	scene1.floorgoLeft:removeAllGC()
	scene1.floorgoRight:removeAllGC()
	gameObjectManager:releaseGameObject(scene1.terrainGo)
	gameObjectManager:releaseGameObject(scene1.floorgoLeft)
	gameObjectManager:releaseGameObject(scene1.floorgoRight)
	scene1.terrainGo = nil
	scene1.floorgoLeft = nil
	scene1.floorgoRight = nil
	
	
	if scene1.letterD ~= nil then
		scene1.letterD:removeAllGC()
		scene1.letterD = nil
		scene1.letterE:removeAllGC()
		scene1.letterE = nil
		scene1.letterM:removeAllGC()
		scene1.letterM = nil
		scene1.letterO:removeAllGC()
		scene1.letterO = nil
	end
	--ogreManager:destroyLight(scene1.light)
	--scene1.light = nil
	al_toShowLua("onExitScene1")
end


function scene1.onKeyDown(arg)
	CameraStateManager.onKeyDown(arg)
	if arg.key == KC_P then
		scene1.SceneDirector:addScene(scene2)
	end
end

function scene1.onKeyUp(arg)
	CameraStateManager.onKeyUp(arg)
end

function scene1.onMouseMoved(arg)
	CameraStateManager.onMouseMoved(arg)
end

function scene1.onMouseDown(arg, buttonId)
	
end

function scene1.onMouseUp(arg, buttonId)
	
end
function scene2:onEnterScene(lastScene)
	al_toShowLua("onEnterScene2")
	ogreManager:setBackGroundColor(Ogre.ColourValue(0.5, 0.5, 0.5))
	ogreManager:setAmbientColor(Ogre.ColourValue(0.5, 0.5, 0.5))
	local floorgo = gameObjectManager:createGameObject("FLOOR_TERRAIN2")
	local gcNode = gameComponentManager:createGameComponent(OGRENODE)
	local gcEntity = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntity, "GCEntity")
	ogreManager:createPlaneMesh(TERRAIN_SIZE, TERRAIN_SIZE, "floor")
	gcEntity:initEntity("floor", "floor")
	gcEntity:setMaterialName("CelRockwallRed")
	local phyBody = gameComponentManager:createGameComponent(PHYBODY)
	tolua.cast(phyBody, "PhysicsBody")
	phyBody:initBody(0, COL_TERRAIN, CF_STATIC_OBJECT)
	floorgo:addGC(gcNode)
	floorgo:addGC(gcEntity)
	floorgo:addGC(phyBody)
	
	
	
	local floorgoLeft = gameObjectManager:createGameObject("FLOOR_TERRAIN_LEFT2")
	local gcNodeLeft = gameComponentManager:createGameComponent(OGRENODE)
	tolua.cast(gcNodeLeft, "GCNode")
	gcNodeLeft:roll(90)
	gcNodeLeft:translate(Ogre.Vector3(TERRAIN_SIZE/2, TERRAIN_SIZE/2, 0))
	local gcEntityLeft = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntityLeft, "GCEntity")
	ogreManager:createPlaneMesh(TERRAIN_SIZE, TERRAIN_SIZE, "floor_left")
	gcEntityLeft:initEntity("floor_left", "floor_left")
	gcEntityLeft:setMaterialName("CelRockwallGreen")
	local phyBodyLeft = gameComponentManager:createGameComponent(PHYBODY)
	tolua.cast(phyBodyLeft, "PhysicsBody")
	phyBodyLeft:initBody(0, COL_TERRAIN, CF_STATIC_OBJECT)
	floorgoLeft:addGC(gcNodeLeft)
	floorgoLeft:addGC(gcEntityLeft)
	floorgoLeft:addGC(phyBodyLeft)
	
	local floorgoRight = gameObjectManager:createGameObject("FLOOR_TERRAIN_RIGHT2")
	local gcNodeRight = gameComponentManager:createGameComponent(OGRENODE)
	tolua.cast(gcNodeRight, "GCNode")
	gcNodeRight:pitch(90)
	gcNodeRight:translate(Ogre.Vector3(0, TERRAIN_SIZE/2, -TERRAIN_SIZE/2))
	local gcEntityRight = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntityRight, "GCEntity")
	ogreManager:createPlaneMesh(TERRAIN_SIZE, TERRAIN_SIZE, "floor_right")
	gcEntityRight:initEntity("floor_right", "floor_right")
	gcEntityRight:setMaterialName("CelRockwallBlue")
	local phyBodyRight = gameComponentManager:createGameComponent(PHYBODY)
	tolua.cast(phyBodyRight, "PhysicsBody")
	phyBodyRight:initBody(0, COL_TERRAIN, CF_STATIC_OBJECT)
	floorgoRight:addGC(gcNodeRight)
	floorgoRight:addGC(gcEntityRight)
	floorgoRight:addGC(phyBodyRight)
	
	
	
	
	
	
	scene2.terrainGo = floorgo
	scene2.floorgoLeft = floorgoLeft
	scene2.floorgoRight = floorgoRight
	
	if CameraStateManager.entered == nil then
		CameraStateManager.createCamera("CAMERA_MAIN")
	end
	al_toShowLua("debug :"..tostring(lastScene.letterD))
	
	intergratePhysics(scene2.letterD, 1000)
	intergratePhysics(scene2.letterE, 800)
	intergratePhysics(scene2.letterM, 600)
	intergratePhysics(scene2.letterO, 400)
	
	local shotGun = ShotGun("shootgun2")
	scene2.shotGun = shotGun
	
	ogreManager:setBackGroundColor(Ogre.ColourValue(0.5, 0.5, 0.5))
	ogreManager:setAmbientColor(Ogre.ColourValue(0.7, 0.7, 0.7))
	-- scene1.robot = createPlayer("scenePlayer1", Ogre.Vector3(100, 500, 100), "simba.mesh", "CelSimba")
	scene2.actors = {}
	local origin  = Ogre.Vector3(0, TERRAIN_SIZE - 500, 0)
	local r = TERRAIN_SIZE/2 - 200
	
	for i = 1, maxSizeLevel2 do
		local x = origin.x + r * math.cos( (360/maxSizeLevel1) * i )
		local z = origin.z + r * math.sin( (360/maxSizeLevel1) * i )
		local ninja = createPlayer("sceneNinja2"..tostring(i), Ogre.Vector3(x, origin.y, z), "penguin.mesh", "CelPenguin", nil, CF_DEFAULT, 200)
		table.insert(scene2.actors, ninja)
	end
	local ninja = createPlayer("sceneSmartNinja2", origin, "penguin.mesh", "CelPenguin", nil, CF_DEFAULT, 400)
	scene2.ninja = ninja
end


function scene2:onExitScene(nextScene)
	for i = 1, maxSizeLevel2 do
		local actor = scene2.actors[i]
		actor:destroySelf()
		actor = nil
	end
	scene2.ninja:destroySelf()
	scene2.ninja = nil
	destroyShootGun(scene2.shotGun)
	scene2.shotGun = nil
	
	scene2.terrainGo:removeAllGC()
	scene2.floorgoLeft:removeAllGC()
	scene2.floorgoRight:removeAllGC()
	gameObjectManager:releaseGameObject(scene2.terrainGo)
	gameObjectManager:releaseGameObject(scene2.floorgoLeft)
	gameObjectManager:releaseGameObject(scene2.floorgoRight)
	scene2.terrainGo = nil
	scene2.floorgoLeft = nil
	scene2.floorgoRight = nil
	
	
	if scene2.letterD ~= nil then
		scene2.letterD:removeAllGC()
		scene2.letterD = nil
		scene2.letterE:removeAllGC()
		scene2.letterE = nil
		scene2.letterM:removeAllGC()
		scene2.letterM = nil
		scene2.letterO:removeAllGC()
		scene2.letterO = nil
	end
	--ogreManager:destroyLight(scene2.light)
	--scene2.light = nil
	al_toShowLua("Exit scene2")
end

function scene2.onKeyDown(arg)
	if arg.key == KC_P then
		scene2.SceneDirector:popScene()
	end	
	CameraStateManager.onKeyDown(arg)
end

function scene2.onKeyUp(arg)
	CameraStateManager.onKeyUp(arg)
end

function scene2.onMouseMoved(arg)
	CameraStateManager.onMouseMoved(arg)
end

function scene2.onMouseDown(arg, buttonId)
	
end

function scene2.onMouseUp(arg, buttonId)
	
end

