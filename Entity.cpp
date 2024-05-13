#include "Entity.h"




Entity::Entity() {}

Entity::Entity(string classType, string name):
    classType{classType}, name{name}
{

}

void Entity::setClass(string classTypeNew)
{
    classType = classTypeNew;

}

void Entity::setClassStats()
{
    if (classType == "Warrior")
        setWarrior();
    else if (classType == "Wizard")
        setWizard();
    

}