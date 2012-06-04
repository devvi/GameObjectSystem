-- Function: Init the component factories which we need and register it to system 
-- Author  : Devvi
-- Data    : 2012.05.13
require "type"

gcNodeFactory = NodeComponentFactory()
gcEntityFactory = OgreEntityComponentFactory()
gcUserFactory = UserComponentFactory()
gcPhysicsBodyFactory = PhysicsBodyComponentFactory()

gameComponentManager:setFactory(OGRENODE, gcNodeFactory)
gameComponentManager:setFactory(RENDER_ENTITY, gcEntityFactory)
gameComponentManager:setFactory(USER, gcUserFactory)
gameComponentManager:setFactory(PHYBODY, gcPhysicsBodyFactory)