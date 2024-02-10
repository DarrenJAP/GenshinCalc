
#pragma once

#include <string>

#include "./Common.h"
#include "./Stats.h"

class Weapon
{
public:
	std::string name = "";

	lvl level = l20;
	Stats stats = Stats();

	int refinement = 1;

	std::string description;

public:
	Weapon() = default;
	void initialize(std::string name, lvl level, int refinement, std::string description);
};