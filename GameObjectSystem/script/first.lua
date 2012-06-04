-- Function: the whole entry point of lua script
-- Author  : Devvi
-- Data    : 2012.05.13
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

--require "test"
-- init SceneDirector add a dummy scene
sceneDirector = SceneDirector()
sceneDirector:addScene(sceneInit)



