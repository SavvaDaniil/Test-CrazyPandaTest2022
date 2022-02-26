#include "ItemService.h"

std::vector<Item> ItemService::mockListAll()
{

	std::vector<Item> items;

	Item itemMelee = Item(
		"axe_01", 3, Common, 12.0, 0.9, true
	);
	items.push_back(itemMelee);

	Item itemRange1 = Item("revolver_01", 5, Common, 42.0, 2.0, false);
	items.push_back(itemRange1);

	Item itemRange2 = Item("revolver_02", 3, Rare, 50.0, 2.1, false);
	items.push_back(itemRange2);

	Item itemRange3 = Item("machinegun_01", 5, Epic, 83.1, 10.0, false);
	items.push_back(itemRange3);

	Item itemArmour1 = Item("jacket_01", 2, Common, 2.0);
	items.push_back(itemArmour1);

	Item itemArmour2 = Item("bulletprof_vest_01", 5, Rare, 30.0);
	items.push_back(itemArmour2);


	return items;
}
