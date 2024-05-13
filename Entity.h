#ifndef ENTITY_H
#define ENTITY_H
#include "Classes.h"


class Entity : public Classes
{
private:
string classType;
string name;


public:
Entity();
Entity(string classType, string name);


void setClass(string classTypeNew);
void setClassStats();

};










#endif