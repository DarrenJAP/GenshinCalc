
#pragma once

// Universal stats class
// Not every stat is used

class Stats
{
public:
	float baseHP = 0.0f, baseATK = 0.0f, baseDEF = 0.0f;
	float CR = 0.0f, CD = 0.0f, ER = 0.0f;

	float HPpercent = 0.0f, ATKpercent = 0.0f, DEFpercent = 0.0f;

	// only for characters (base * (1 + percent) + flat)
	// wont be used in + - operators, only for storing
	float HP = 0.0f, ATK = 0.0f, DEF = 0.0f;

	float flatATK = 0.0f, flatDEF = 0.0f, flatHP = 0.0f;

	float pyroDMG = 0.0f, cryoDMG = 0.0f, hydroDMG = 0.0f, geoDMG = 0.0f,
		dendroDMG = 0.0f, anemoDMG = 0.0f, electroDMG = 0.0f, physicalDMG = 0.0f;

	float elementalMastery = 0.0f;

public:
	Stats() = default;

	Stats operator+=(Stats const& other);
	Stats operator-=(Stats const& other);
};