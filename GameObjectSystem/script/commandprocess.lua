-- Function: a interface from lua to C++ to handle the OIS input event-- Author  : Devvi-- Data    : 2012.05.15require "util"require "type"local tolua = tolualocal debug = debuglocal ipairs = ipairslocal type = typeinputListenerers = {}function addInputListender(l)	table.insert(inputListenerers, l)endfunction removeInputListener(l)	for i, v in ipairs(inputListenerers) do		if l == v then			table.remove(inputListenerers, i)			break		end	endendfunction KeyPressed(arg)	for _, v in ipairs(inputListenerers) do		v:onKeyDown(arg)	endendfunction KeyReleased(arg)	for _, v in ipairs(inputListenerers) do		v:onKeyUp(arg)	endendfunction MouseMoved(arg)	for _, v in ipairs(inputListenerers) do		v:onMouseMoved(arg)	endendfunction MousePressed(arg, buttonId)	for _, v in ipairs(inputListenerers) do		v:onMouseDown(arg, buttonId)	endendfunction MouseReleased(arg, buttonId)	for _, v in ipairs(inputListenerers) do		v:onMouseUp(arg, buttonId)	endend