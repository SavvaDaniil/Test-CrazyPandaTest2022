# Test-CrazyPandaTest2022
Test for "Crazy Panda" company

Write a console program that will read the modified characteristics of items.
There is an inventory that stores several items of different properties that have common characteristics (
name, type, level (integer), rarity ( Common, Rare, Epic ) )
and numerical <double> characteristics specific to each type (for example, weapon damage or defense level of
armor).
There are also modifiers (Buffs) that have filters on the characteristics of items. For example "level is greater than N"
or "rarity equals Rare". There can be several filters.
The program should fill the inventory, create modifiers and display the value of the modified
characteristics for all items.
  
Input data:
Inventory: 
  {ident: "axe_01", type: Melee, level: 3, rarity: Common, damage: 12.0, speed: 0.9 },
  {ident: "revolver_01", type: Range, level: 5, rarity: Common, damage: 42.0, speed: 2.0 },
  {ident: "revolver_02", type: Range, level: 3, rarity: Rare, damage: 50.0, speed: 2.1 },
  {ident: "machinegun_01", type: Range, level: 5, rarity: Epic, damage: 83.1, speed: 10.0 },
  {ident: "jacket_01", type: Armour, level: 2, rarity: Common, protection: 2.0 },
  {ident: "bulletprof_vest_01", type: Armour, level: 5, rarity: Rare, protection: 30.0 }
  
Modifiers:
  
  { ident: "eagle_eye", filters: [{"level", ">=", 4}, { "type", Range}], type: DamageBuff, value: 10 },
  { ident: "donatium_steel", filters: [{"rarity", Rare}], type: ProtectionBuff, value: 15 },
  { ident: "rage_drink", filters: [{"type", Range}, {"type", Melee}], type: SpeedBuff, value: 0.4 }
  
P.S. Recommended to use C++17 or later
