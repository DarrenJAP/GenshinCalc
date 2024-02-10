
#pragma once

#include <iostream>

#include "Common.h"
#include "Stats.h"

class Artifact
{
public:
	int id = 0;
	artSet set = (artSet)0;

	Stats stats = Stats();

public:
	Artifact() = default;
	Artifact(int id, artSet set);

	Stats getTwoPieceBonus();
};