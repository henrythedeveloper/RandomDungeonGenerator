//
// Created by Henry Le on 5/13/24.
//

#ifndef RANDOMDUNGEONGENERATOR_CLASSES_H
#define RANDOMDUNGEONGENERATOR_CLASSES_H

#include "Stats.h"
#include <string>
    using std::string;

class Classes : public Stats
{
private:
string warrior;
string wizard;


public:

void setWarrior();
void setWizard();

};

#endif //RANDOMDUNGEONGENERATOR_CLASSES_H
