#include "BuffFilter.h"

BuffFilter::BuffFilter(std::string _name, std::string _operatorName, double _value)
{
	name = _name;
	operatorName = _operatorName;
	value = _value;
}

BuffFilter::BuffFilter(std::string _name, ItemType _itemType)
{
	name = _name;
	itemType = _itemType;
}

BuffFilter::BuffFilter(std::string _name, Rarity _rarity)
{
	name = _name;
	rarity = _rarity;
}
