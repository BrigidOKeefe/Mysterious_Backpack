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
   char *items_1[] = {"Knife", "Water", "Flint", "Mirror", "Journal", "First-Aid Kit", "Flashlight", "Rope", "Food"};
   char *items_2[] = {"Tent", "Fishing Hook", "Lighter", "Pen","Blanket", "Pop Can", "Map","Compass","Tarp" };
   char *items_3[] = {"Keys","Pistol","Rock","Glass Bottle","Cell Phone","Radio","Picture Frame","Stick","Newspaper"};
   
   
   bag.item1 = items_1[rand_in_range(0, 9)];
   bag.item2 = items_2[rand_in_range(0, 9)];
   bag.item3 = items_3[rand_in_range(0, 9)]; 
   
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

//generate a random list of numbers that does not repeat a number
int* rand_list(int *list, int length, int x, int y)
{
  int new; 

  for(int ctr = 0; ctr < length; ctr++)
  {
      new = rand_in_range(x,y);
      //if item is not in list
      *(list+ctr) = new;
  
  }
  return list;

}