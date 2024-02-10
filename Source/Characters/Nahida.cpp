#include "Nahida.h"

Nahida::Nahida(lvl level, int talentLevel1, int talentLevel2, int talentLevel3, int constellation)
	: Character()
{
	std::vector<float> baseHP = { 2092, 4165, 5357, 6720, 7926, 9140, 10360 };
	std::vector<float> baseATK = { 60.4, 120.2, 154.6, 194, 228.7, 263.8, 299 };
	std::vector<float> baseDEF = { 60.4, 120.2, 154.6, 194, 228.7, 263.8, 299 };

	initialize("Nahida", level, talentLevel1, talentLevel2, talentLevel3,
		baseHP[level], baseATK[level], baseDEF[level], constellation);

	std::vector<int> specialStat_EM = { 0, 0, 29, 58, 58, 86, 115 };

	stats.elementalMastery += specialStat_EM[level];
}