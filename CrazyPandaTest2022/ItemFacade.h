#pragma once

#include "ItemService.h"
#include "BuffService.h"

class ItemFacade
{
public:
	void printItemsWithBuffs();
private:
	void updateItemByFilter(Item *item, Buff buff, BuffFilter buffFilter);
};

