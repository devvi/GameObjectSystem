#include "GCUserComponent.h"

using namespace DAISY;

UserComponent::UserComponent(GameObject* game_object):
GameComponent(USER, game_object){}
UserComponent::~UserComponent(){}

void UserComponent::onAttachObject(){}
void UserComponent::onDetachObject(){}
void UserComponent::onUpdate(float interval){}

UserComponentFactory::UserComponentFactory(){}
UserComponentFactory::~UserComponentFactory(){}

GameComponent* UserComponentFactory::createComponent()
{
	return new UserComponent();
}
void UserComponentFactory::releaseGameComponent(GameComponent* gc)
{
	delete gc;
}

