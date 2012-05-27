require "player"
require "sceneDirector"
require "type"
require "shootGun"
local interval = FIXED_UPDATE_RATE
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

function sceneInit.onEnterScene()
	ogreManager:setBackGroundColor(Ogre.ColourValue(0.2, 0.2, 0.2))
end

function sceneInit.onExitScene()
end

function sceneInit.onKeyDown(arg)
	if arg.key == KC_P then
		sceneInit.SceneDirector:addScene(scene1)
	end
end

function sceneInit.onKeyUp(arg)
end

function sceneInit.onMouseMoved(arg)
end

function sceneInit.onMouseDown(arg, buttonId)
end

function sceneInit.onMouseUp(arg, buttonId)
	
end

function scene1.onEnterScene()
	al_toShowLua("onEnterScene1")
	
	
	ogreManager:setSkyDome( true, "Examples/CloudySky");
	local floorgo = gameObjectManager:createGameObject("FLOOR_TERRAIN")
	local gcNode = gameComponentManager:createGameComponent(OGRENODE)
	local gcEntity = gameComponentManager:createGameComponent(RENDER_ENTITY)
	tolua.cast(gcEntity, "GCEntity")
	ogreManager:createPlaneMesh(TERRAIN_SIZE, TERRAIN_SIZE, "floor")
	gcEntity:initEntity("floor", "floor")
	gcEntity:setMaterialName("Examples/Rockwall")
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
	gcEntityLeft:setMaterialName("Examples/Rockwall")
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
	gcEntityRight:setMaterialName("Examples/Rockwall")
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
	
	
	
	local shootGun = ShootGun("shootgun")
	scene1.shootGun = shootGun
	
	ogreManager:setBackGroundColor(Ogre.ColourValue(0.5, 0.5, 0.5))
	ogreManager:setAmbientColor(Ogre.ColourValue(1, 1, 1))
	scene1.robot = createPlayer("scenePlayer1", Ogre.Vector3(100, 500, 100), "simba.mesh", "CelSimba")
	scene1.ninja = createPlayer("sceneNinja", Ogre.Vector3(-100, 500, -100), "ninja.mesh", "CelNinja")
end


function scene1.onExitScene()
	scene1.robot:destroySelf()
	scene1.robot = nil
	
	scene1.ninja:destroySelf()
	scene1.ninja = nil
	destroyShootGun(scene1.shootGun)
	scene1.shootGun = nil
	scene1.terrainGo:removeAllGC()
	scene1.floorgoLeft:removeAllGC()
	scene1.floorgoRight:removeAllGC()
	gameObjectManager:releaseGameObject(scene1.terrainGo)
	gameObjectManager:releaseGameObject(scene1.floorgoLeft)
	gameObjectManager:releaseGameObject(scene1.floorgoRight)
	scene1.terrainGo = nil
	scene1.floorgoLeft = nil
	scene1.floorgoRight = nil
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
function scene2.onEnterScene()
	al_toShowLua("onEnterScene2")
	ogreManager:setBackGroundColor(Ogre.ColourValue(0.5, 0.5, 0.5))
	ogreManager:setAmbientColor(Ogre.ColourValue(0.5, 0.5, 0.5))
	scene2.player = createPlayer("scenePlayer2", Ogre.Vector3(-100, 1000, -100), "penguin.mesh", "CelPenguin")
	
end


function scene2.onExitScene()
	scene2.player:destroySelf()
	scene2.player = nil
	al_toShowLua("onExitScene2")
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

