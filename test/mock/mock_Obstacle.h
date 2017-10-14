/*
 * mock_ObstacleJson.h, part of VCMI engine
 *
 * Authors: listed in file AUTHORS in main folder
 *
 * License: GNU General Public License v2.0 or later
 * Full text of license available in license.txt file, in main folder
 *
 */
#pragma once
#include "StdInc.h"
#include "lib/battle/obstacle/Obstacle.h"

class ObstacleMock : public Obstacle
{
public:
	MOCK_CONST_METHOD0(getType, ObstacleType());
	MOCK_CONST_METHOD2(visibleForSide, bool(ui8 side, bool hasNativeStack));
	MOCK_CONST_METHOD1(canRemovedBySpell, bool(int8_t levelOfSpellRemoval));
	MOCK_METHOD0(battleTurnPassed, void());
};
