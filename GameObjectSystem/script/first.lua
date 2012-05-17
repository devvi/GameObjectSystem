package.path = "script/?.lua" .. package.path

require "factoryinit"
require "factoryinit"
require "usercomponents"
require "util"
require "player"
local tostring = tostring
local math = math
local io = io
local debug = debug
local tolua = tolua

player = createPlayer()


