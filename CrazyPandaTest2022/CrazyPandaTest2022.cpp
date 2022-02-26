// CrazyPandaTest2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "ItemService.h"
#include "BuffService.h"
#include "ItemFacade.h"

int main()
{
    BuffService buffService;
    std::vector<Buff> buffs = buffService.listAllMock();
    for (int i = 0; i < buffs.size(); i++) {
        //std::cout << buffs[i].name << "\n\n";
    }


    ItemFacade itemFacade;
    itemFacade.printItemsWithBuffs();

    std::cout << std::endl << "Finish!\n";

    system("pause");
    return 0;
}
