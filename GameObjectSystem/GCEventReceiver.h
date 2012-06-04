/*
-----------------------------------------------------------------------------
This soure file is part of GameObjectSystem.
Copyright (c) 2012 Devvi
-----------------------------------------------------------------------------
*/

#ifndef __GAME_OBJECT_SYSTEM_GC_EVENT_RECIEVER_H__
#define __GAME_OBJECT_SYSTEM_GC_EVENT_RECIEVER_H__

namespace DAISY{
	class EventReceiver :public GameComponent
	{
	public:
		EventReceiver(GameObject* game_object = NULL);
		~EventReceiver();
		void onUpdate(float interval);
		void onAttachObject();
		void onDetachObject();
		



	};
}
#endif