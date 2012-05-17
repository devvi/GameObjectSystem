local tostring = tostring
local math = math
local io = io
local debug = debug
local tolua = tolua

local file = io.open("script/LuaLog.txt", "w")

function writeLog(s)
	if debug.getinfo(2,"n").name ~= nil then
		file:write("function: "..debug.getinfo(2,"n").name.." "..s.."\n")
	else
		file:write("function: "..debug.getinfo(1,"n").name.." "..s.."\n")
	end
	file:flush()
end

function closeLog()
	file:flush()
	file:close()
	file = nil
end