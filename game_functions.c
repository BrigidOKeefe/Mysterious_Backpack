//game_functions.c
//Brigid O'Keefe 4/12/2021
//functions to run final project game
#include <stdio.h>
#include "game.h"

struct backpack new_bag()
{
   struct backpack bag; 
   
   bag.item1 = "Knife";
   bag.item2 = "water";
   bag.item3 = "flint"; 
   
   return bag; 
}
