#ifndef __GAME_OBJECT_SYSTEM_GC_USER_COMPONENT_H__
#define __GAME_OBJECT_SYSTEM_GC_USER_COMPONENT_H__
#include "GOSDecl.h"
#include "gameObject.h"

namespace DAISY
{
	class UserComponent: public GameComponent
	{
	public:
		UserComponent(GameObject* game_object = NULL);
		~UserComponent();
		void onUpdate(float interval);
		void onAttachObject();
		void onDetachObject();

	};

	class UserComponentFactory: public GameComponentFactory
	{
	public:
		UserComponentFactory();
		~UserComponentFactory();
		GameComponent* createComponent();
		void releaseGameComponent(GameComponent* gc);
	};
}



#endif
