
#include "Weapon.h"

void Weapon::initialize(std::string name, lvl level, int refinement, std::string description)
{
	this->name = name;
	this->level = level;
	this->refinement = refinement;
	this->description = description;
}
