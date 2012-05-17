require "type"

gcNodeFactory = NodeComponentFactory()
gcEntityFactory = OgreEntityComponentFactory()
gcUserFactory = UserComponentFactory()
gcPhysicsBodyFactory = PhysicsBodyComponentFactory()

gameComponentManager:setFactory(OGRENODE, gcNodeFactory)
gameComponentManager:setFactory(RENDER_ENTITY, gcEntityFactory)
gameComponentManager:setFactory(USER, gcUserFactory)
gameComponentManager:setFactory(PHYBODY, gcPhysicsBodyFactory)