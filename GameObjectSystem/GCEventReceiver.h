#ifndef __GAME_OBJECT_SYSTEM_GC_EVENT_RECIEVER_H__
#define __GAME_OBJECT_SYSTEM_GC_EVENT_RECIEVER_H__

namespace DAISY{
	class EventReveiver :public GameComponent
	{
	public:
		EventReveiver(GameObject* game_object = NULL);
		~EventReveiver();
		void onUpdate(float interval);
		void onAttachObject();
		void onDetachObject();
		



	};
}
#endif