
#include "Stats.h"

Stats Stats::operator+=(Stats const& other)
{
	baseHP = baseHP + other.baseHP;
	baseDEF = baseDEF + other.baseDEF;
	baseATK = baseATK + other.baseATK;

	HPpercent = HPpercent + other.HPpercent;
	DEFpercent = DEFpercent + other.DEFpercent;
	ATKpercent = ATKpercent + other.ATKpercent;

	flatHP = flatHP + other.flatHP;
	flatDEF = flatDEF + other.flatDEF;
	flatATK = flatATK + other.flatATK;

	HP = HP + other.HP;
	DEF = DEF + other.DEF;
	ATK = ATK + other.ATK;

	CR = CR + other.CR;
	CD = CD + other.CD;
	ER = ER + other.ER;

	elementalMastery = elementalMastery + other.elementalMastery;

	pyroDMG = pyroDMG + other.pyroDMG;
	cryoDMG = cryoDMG + other.cryoDMG;
	hydroDMG = hydroDMG + other.hydroDMG;
	electroDMG = electroDMG + other.electroDMG;
	anemoDMG = anemoDMG + other.anemoDMG;
	geoDMG = geoDMG + other.geoDMG;
	dendroDMG = dendroDMG + other.dendroDMG;
	physicalDMG = physicalDMG + other.physicalDMG;

	return *this;
}

Stats Stats::operator-=(Stats const& other)
{
	baseHP = baseHP - other.baseHP;
	baseDEF = baseDEF - other.baseDEF;
	baseATK = baseATK - other.baseATK;

	HPpercent = HPpercent - other.HPpercent;
	DEFpercent = DEFpercent - other.DEFpercent;
	ATKpercent = ATKpercent - other.ATKpercent;

	flatHP = flatHP - other.flatHP;
	flatDEF = flatDEF - other.flatDEF;
	flatATK = flatATK - other.flatATK;

	CR = CR - other.CR;
	CD = CD - other.CD;
	ER = ER - other.ER;

	elementalMastery = elementalMastery - other.elementalMastery;

	pyroDMG = pyroDMG - other.pyroDMG;
	cryoDMG = cryoDMG - other.cryoDMG;
	hydroDMG = hydroDMG - other.hydroDMG;
	electroDMG = electroDMG - other.electroDMG;
	anemoDMG = anemoDMG - other.anemoDMG;
	geoDMG = geoDMG - other.geoDMG;
	dendroDMG = dendroDMG - other.dendroDMG;
	physicalDMG = physicalDMG - other.physicalDMG;

	return *this;
}
