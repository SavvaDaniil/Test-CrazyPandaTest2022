#include "BuffService.h"

std::vector<Buff> BuffService::listAllMock()
{
    std::vector<Buff> buffs = std::vector <Buff>();

    /*
    { ident: "eagle_eye", filters: [{"level", ">=", 4}, { "type", Range}], type: DamageBuff, value: 10 },
    { ident: "donatium_steel", filters: [{"rarity", Rare}], type: ProtectionBuff, value: 15 },
    { ident: "rage_drink", filters: [{"type", Range}, {"type", Melee}], type: SpeedBuff, value: 0.4 }
    */

    BuffFilter buffFilter1_1 = BuffFilter("level", ">=", 4);
    BuffFilter buffFilter1_2 = BuffFilter("type", Range);
    std::vector<BuffFilter> buffFilters1;
    buffFilters1.push_back(buffFilter1_1);
    buffFilters1.push_back(buffFilter1_1);

    Buff buff1 = Buff("eagle_eye", buffFilters1, DamageBuff, 10);
    buffs.push_back(buff1);


    BuffFilter buffFilter2_1 = BuffFilter("rarity", Rare);
    std::vector<BuffFilter> buffFilters2;
    buffFilters2.push_back(buffFilter2_1);
    Buff buff2 = Buff("donatium_steel", buffFilters2, ProtectionBuff, 15);
    buffs.push_back(buff2);

    BuffFilter buffFilter3_1 = BuffFilter("type", Range);
    BuffFilter buffFilter3_2 = BuffFilter("type", Melee);
    std::vector<BuffFilter> buffFilters3;
    buffFilters3.push_back(buffFilter3_1);
    buffFilters3.push_back(buffFilter3_2);
    Buff buff3 = Buff("rage_drink", buffFilters3, SpeedBuff, 0.4);
    buffs.push_back(buff3);

    return buffs;
}
