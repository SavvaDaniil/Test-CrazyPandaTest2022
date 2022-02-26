#include "ItemFacade.h"

#include <typeinfo>

void ItemFacade::printItemsWithBuffs()
{

    ItemService itemService;
    std::vector<Item> itemMocks = itemService.mockListAll();

    BuffService buffService;
    std::vector<Buff> buffMocks = buffService.listAllMock();

    for (int i = 0; i < itemMocks.size(); i++) {


        for (int b = 0; b < buffMocks.size(); b++) {

            for (int f = 0; f < buffMocks[b].buffFilters.size(); f++){

                if (buffMocks[b].buffFilters[f].name == "level") {
                    if (buffMocks[b].buffFilters[f].operatorName == "==") {
                        if(buffMocks[b].buffFilters[f].value == itemMocks[i].level) {
                            updateItemByFilter(&itemMocks[i], buffMocks[b], buffMocks[b].buffFilters[f]);
                            break;
                        }
                    }
                    else if (buffMocks[b].buffFilters[f].operatorName == ">=") {
                        if (buffMocks[b].buffFilters[f].value <= itemMocks[i].level) {
                            updateItemByFilter(&itemMocks[i], buffMocks[b], buffMocks[b].buffFilters[f]);
                            break;
                        }
                    }
                    else if (buffMocks[b].buffFilters[f].operatorName == "<=") {
                        if (buffMocks[b].buffFilters[f].value >= itemMocks[i].level) {
                            updateItemByFilter(&itemMocks[i], buffMocks[b], buffMocks[b].buffFilters[f]);
                            break;
                        }
                    }
                    else if (buffMocks[b].buffFilters[f].operatorName == ">") {
                        if (buffMocks[b].buffFilters[f].value < itemMocks[i].level) {
                            updateItemByFilter(&itemMocks[i], buffMocks[b], buffMocks[b].buffFilters[f]);
                            break;
                        }
                    }
                    else if (buffMocks[b].buffFilters[f].operatorName == "<") {
                        if (buffMocks[b].buffFilters[f].value > itemMocks[i].level) {
                            updateItemByFilter(&itemMocks[i], buffMocks[b], buffMocks[b].buffFilters[f]);
                            break;
                        }
                    }
                }

                if (buffMocks[b].buffFilters[f].name == "rarity") {
                    if (buffMocks[b].buffFilters[f].rarity == itemMocks[i].rarity) {
                        updateItemByFilter(&itemMocks[i], buffMocks[b], buffMocks[b].buffFilters[f]);
                        break;
                    }
                }

                if (buffMocks[b].buffFilters[f].name == "type") {
                    if (buffMocks[b].buffFilters[f].itemType == itemMocks[i].itemType) {
                        updateItemByFilter(&itemMocks[i], buffMocks[b], buffMocks[b].buffFilters[f]);
                        break;
                    }
                }
            }
        }

        itemMocks[i].printJsonString();
    }
}

void ItemFacade::updateItemByFilter(Item *item, Buff buff, BuffFilter buffFilter)
{
    if (buff.buffType == DamageBuff) {
        (*item).damage += buff.value;
    }
    else if (buff.buffType == ProtectionBuff) {
        (*item).protection += buff.value;
    }
    else if (buff.buffType == SpeedBuff) {
        (*item).speed += buff.value;
    }
}


