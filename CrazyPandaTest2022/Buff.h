#pragma once

#include <string>
#include "BuffFilter.h"
#include <vector>

enum BuffType {
	DamageBuff,
	ProtectionBuff,
	SpeedBuff
};

class Buff
{
public:
	Buff(std::string _name, std::vector<BuffFilter> _buffFilters, BuffType _buffType, double _value);
	std::string name;
	std::vector<BuffFilter> buffFilters;
	BuffType buffType;
	double value;
};

