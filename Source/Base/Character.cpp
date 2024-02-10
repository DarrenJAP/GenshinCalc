
#include "Character.h"

void Character::initialize(std::string name, lvl level, int talentLevel1, int talentLevel2,
	int talentLevel3, float baseHP, float baseATK, float baseDEF, int constellation)
{
	this->name = name;
	this->level = level;
	this->constellation = constellation;

	talentsLevel[0] = talentLevel1;
	talentsLevel[1] = talentLevel2;
	talentsLevel[2] = talentLevel3;

	stats.baseHP = baseHP;
	stats.baseDEF = baseDEF;
	stats.baseATK = baseATK;

	stats.CR = 0.05f;
	stats.CD = 0.5f;
	stats.ER = 1.0f;

	updateStats();
}

void Character::addWeapon(Weapon weapon)
{
	stats += weapon.stats;
	updateStats();
}

void Character::addArtifact(Artifact artifact)
{
	stats += artifact.stats;
	artifactList.push_back(artifact);
	
	updateArtifactBonuses();
	updateStats();
}

Stats Character::getStats()
{
	Stats final;
	final += stats;
	final += artifactBonus;

	return final;
}

void Character::updateStats()
{
	// update stats that are specific to characters (stored in Stats)
	stats.ATK = stats.baseATK * (1.0f + stats.ATKpercent) + stats.flatATK;
	stats.DEF = stats.baseDEF * (1.0f + stats.DEFpercent) + stats.flatDEF;
	stats.HP = stats.baseHP * (1.0f + stats.HPpercent) + stats.flatHP;
}

void Character::updateArtifactBonuses()
{
	artifactBonus = Stats();

	std::map<artSet, int> sets;

	// Check for artifact bonuses
	for (int i = 0; i < artifactList.size(); i++)
	{
		if (sets.find(artifactList.at(i).set) != sets.end())
			sets.find(artifactList.at(i).set)->second += 1;
		else
			sets.insert(std::pair<artSet, int>(artifactList.at(i).set, 1));
	}

	// loop through sets and find yg >= 2 trs apply bonus
	for (auto const& x : sets)
	{
		if (x.second >= 2)
		{
			// find specific artifact set
			auto find = std::find_if(artifactList.begin(), artifactList.end(),
				[&](auto const& e) {return e.set == x.first; });

			if (find != artifactList.end())
			{
				Stats statsToAdd = artifactList.at(std::distance(artifactList.begin(), find)).getTwoPieceBonus();
				artifactBonus += statsToAdd;
			}
		}
	}
}
