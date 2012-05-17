require "player"
require "sceneDirector"

scene1 = {}

scene2 = {}

function scene1.onEnterScene()
	al_toShowLua("onEnterScene1")
	ogreManager:setBackGroundColor(Ogre.ColourValue(0, 0, 0))
	ogreManager:setAmbientColor(Ogre.ColourValue(1, 1, 1))
	scene1.player = createPlayer()
end


function scene1.onExitScene()
	
	scene1.player:destroySelf()
	al_toShowLua("onExitScene1")
end


function scene1.onKeyDown(arg)
	if arg.key == KC_P then
		scene1.SceneDirector:addScene(scene2)
	end
end

function scene1:onKeyUp(arg)
	
end

function scene1:onMouseMoved(arg)
	
end

function scene1:onMouseDown(arg, buttonId)
	
end

function scene1:onMouseUp(arg, buttonId)
	
end
function scene2.onEnterScene()
	al_toShowLua("onEnterScene2")
	ogreManager:setBackGroundColor(Ogre.ColourValue(1, 1, 1))
	ogreManager:setAmbientColor(Ogre.ColourValue(1,1, 1))
	scene2.player = createPlayer()
end


function scene2.onExitScene()
	
	scene2.player:destroySelf()
	al_toShowLua("onExitScene2")
end

function scene2.onKeyDown(arg)
	if arg.key == KC_P then
		scene2.SceneDirector:popScene()
	end	
end

function scene2:onKeyUp(arg)
	
end

function scene2:onMouseMoved(arg)
	
end

function scene2:onMouseDown(arg, buttonId)
	
end

function scene2:onMouseUp(arg, buttonId)
	
end

