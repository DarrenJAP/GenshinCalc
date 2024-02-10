
#include "Artifact.h"

Artifact::Artifact(int id, artSet set)
{
	this->id = id;
	this->set = set;
}

Stats Artifact::getTwoPieceBonus()
{
	Stats returnValue;

	switch (set)
	{
	case gildedDreams:
		returnValue.elementalMastery = 80; break;
	case deepwoodMemories:
		returnValue.dendroDMG = 0.15f; break;
	case vv:
		returnValue.anemoDMG = 0.15f; break;
	}
	
	return returnValue;
}
