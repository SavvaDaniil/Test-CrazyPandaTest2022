#pragma once

#include <string>
#include "Item.h"

class BuffFilter
{
public:
	BuffFilter(std::string _name, std::string _operatorName, double _value);
	BuffFilter(std::string _name, ItemType _itemType);
	BuffFilter(std::string _name, Rarity _rarity);
	std::string name;
	std::string operatorName;
	ItemType itemType;
	Rarity rarity;
	double value;

};

