#include "GameObject.h"
GameComponent::GameComponent()
{}
GameComponent::~GameComponent()
{}
void GameComponent::onAttatchToObject(){}
void GameComponent::onUpdate(){}
void GameComponent::onLeaveFromObject(){}
GameObject::GameObject()
{}
GameObject::~GameObject()
{}
void GameObject::addGC(GameComponentPtr gcptr){}
GameComponentPtr GameObject::getCC(const std::string& gc_name){return GameComponentPtr(new GameComponent());}
bool GameObject::hasGC(const std::string& gc_name){return true;}