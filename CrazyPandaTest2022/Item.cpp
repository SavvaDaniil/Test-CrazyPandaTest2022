
#include "Item.h"


Item::Item(std::string identNew, int levelNew, Rarity rarityNew, double damageNew, double speedNew, bool isMelee)
{
	ident = identNew;
	itemType = (isMelee ? Melee : Range);
	level = levelNew;
	rarity = rarityNew;
	damage = damageNew;
	speed = speedNew;
}

Item::Item(std::string identNew, int levelNew, Rarity rarityNew, double protectionNew)
{
	ident = identNew;
	itemType = Armor;
	level = levelNew;
	rarity = rarityNew;
	protection = protectionNew;
}

void Item::printJsonString()
{
	if (itemType == Armor) {
		std::printf("{ident: \"%s\", type: %s, level: %x, rarity: %s, protection: %.1f }\n",
			ident.c_str(), itemTypeToString(itemType).c_str(), level, rarityToString(rarity).c_str(), protection);
	}
	else {
		std::printf("{ident: \"%s\", type: %s, level: %x, rarity: %s, damage: %.1f, speed: %.1f }\n",
			ident.c_str(), itemTypeToString(itemType).c_str(), level, rarityToString(rarity).c_str(), damage, speed);
	}
}

std::string Item::itemTypeToString(ItemType itemType)
{
	switch (itemType)
	{
	case Melee:
		return "Melee";
	case Range:
		return "Range";
	case Armor:
		return "Armor";
	default:
		return "";
	}
}

std::string Item::rarityToString(Rarity rarity)
{
	switch (rarity)
	{
	case Common:
		return "Common";
	case Rare:
		return "Rare";
	case Epic:
		return "Epic";
	default:
		return "";
	}
}
