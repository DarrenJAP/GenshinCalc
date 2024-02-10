
#include <iostream>

#include "Characters/Nahida.h"
#include "Base/Artifact.h"
#include "Weapons/SacFragments.h"

int main()
{
	Nahida nahida(l90, 10, 10, 10, 0);

	SacFragments sac(l90);
	nahida.addWeapon(sac);

	Artifact flower(0, gildedDreams);
	flower.stats.flatHP = 4780;
	flower.stats.flatDEF = 37;
	flower.stats.flatATK = 29;
	flower.stats.CR = 0.105f;
	flower.stats.CD = 0.148f;
	nahida.addArtifact(flower);

	Artifact plume(1, gildedDreams);
	plume.stats.flatATK = 311;
	plume.stats.CR = 0.074f;
	plume.stats.CD = 0.062f;
	plume.stats.elementalMastery = 35;
	plume.stats.ATKpercent = 0.14f;
	nahida.addArtifact(plume);

	Artifact sands(2, deepwoodMemories);
	sands.stats.elementalMastery = 187;
	sands.stats.ATKpercent = 0.105f;
	sands.stats.flatATK = 19;
	sands.stats.HPpercent = 0.21f;
	sands.stats.ER = 0.052f;
	nahida.addArtifact(sands);

	Artifact goblet(3, deepwoodMemories);
	goblet.stats.dendroDMG = 0.466f;
	goblet.stats.flatHP = 538;
	goblet.stats.CD = 0.148f;
	goblet.stats.flatDEF = 21;
	goblet.stats.CR = 0.132f;
	nahida.addArtifact(goblet);

	Artifact circlet(4, vv);
	circlet.stats.CD = 0.622f;
	circlet.stats.flatHP = 269;
	circlet.stats.ER = 0.065f;
	circlet.stats.flatDEF = 16;
	circlet.stats.CR = 0.148f;
	nahida.addArtifact(circlet);

	Stats nahidaStats = nahida.getStats();
	std::cout << "ATK: " << nahidaStats.ATK << std::endl;
	std::cout << "EM: " << nahidaStats.elementalMastery << std::endl;
	std::cout << "CR: " << nahidaStats.CR << std::endl;
	std::cout << "CD: " << nahidaStats.CD << std::endl;
	std::cout << "Dendro DMG: " << nahidaStats.dendroDMG << std::endl;

	return 0;
}