
#pragma once

#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

#include "./Common.h"
#include "./Artifact.h"
#include "./Weapon.h"
#include "./Stats.h"

class Character
{
public:
	std::string name = "";

	lvl level = l20;
	int talentsLevel[3] = { 1, 1, 1 };
	int constellation = 0;

	Stats stats = Stats();
	Stats artifactBonus = Stats();

	std::vector<Artifact> artifactList;

public:
	Character() = default;

	void initialize(std::string name, lvl level, int talentLevel1, int talentLevel2,
		int talentLevel3, float baseHP, float baseATK, float baseDEF, int constellation);

	void addWeapon(Weapon weapon);
	void addArtifact(Artifact artifact);

	Stats getStats();

private:
	void updateStats();
	void updateArtifactBonuses();
};