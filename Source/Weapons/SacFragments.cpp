#include "SacFragments.h"

SacFragments::SacFragments(lvl level) : Weapon()
{
	std::vector<float> ATK = { 99, 184, 238, 293, 347, 401, 454 };
	std::vector<float> EM = { 85, 124, 143, 162, 182, 201, 221 };

	stats.baseATK = ATK[level];
	stats.elementalMastery = EM[level];
}