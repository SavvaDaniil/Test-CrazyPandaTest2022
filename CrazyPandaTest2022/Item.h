#pragma once

#include <iostream>
#include <string>

enum ItemType {
	Melee,
	Range,
	Armor
};

enum Rarity {
	Common,
	Rare,
	Epic
};

class Item
{
public:

	std::string ident;
	ItemType itemType;
	int level;
	Rarity rarity;

	double damage = 0.0;
	double speed = 0.0;
	double protection = 0.0;

	Item(std::string identNew, int levelNew, Rarity rarityNew, double damageNew, double speedNew, bool isMelee);
	Item(std::string identNew, int levelNew, Rarity rarityNew, double protectionNew);

	void printJsonString();
private:
	std::string itemTypeToString(ItemType itemType);
	std::string rarityToString(Rarity rarity);
};

