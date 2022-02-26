#include "Buff.h"

Buff::Buff(std::string _name, std::vector<BuffFilter> _buffFilters, BuffType _buffType, double _value)
{
	name = _name;
	buffFilters = _buffFilters;
	buffType = _buffType;
	value = _value;
}
