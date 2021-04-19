//game_functions.c
//Brigid O'Keefe 4/12/2021
//functions to run final project game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

struct backpack new_bag()
{
   //create new bag item
   struct backpack bag; 
   
   //list of possible items
   //char items[10][15] =  "Knife", "Water", "Flint", "Mirror", "Journal", "First-Aid Kit", "Flashlight", "Rope", "Food" ;
   
   
   
   bag.item1 = "Knife";
   bag.item2 = "water";
   bag.item3 = "flint"; 
   
   return bag; 
}

//random number function 
//- created because rand() has too wide of a range for this application.
int rand_in_range(int x, int y)
{
   //following formula is simple and it won't return any numbers above y-2. More robust implementations in future sprints
   //number = (rand() % (upper - lower + 1)) + lower 
   int number = (rand() % (y - x + 1)) + x;
   return number;
}