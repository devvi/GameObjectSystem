package.path = "script/?.lua" .. package.path

require "factoryinit"
require "factoryinit"
require "usercomponents"
require "util"
require "player"
require "scene1"
require "sceneDirector"
local tostring = tostring
local math = math
local io = io
local debug = debug
local tolua = tolua

al_toShowLua(tostring(ogreManager))

sceneDirector = SceneDirector()
sceneDirector:addScene(scene1)



