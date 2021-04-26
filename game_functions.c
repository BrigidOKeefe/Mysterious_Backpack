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
   char *items_1[] = {"Knife", "Water", "Flint", "Mirror", "Journal", "First-Aid_Kit", "Flashlight", "Rope", "Food"};
   char *items_2[] = {"Tent", "Fishing_Hook", "Lighter", "Pen", "Blanket", "Pop_Can", "Map", "Compass", "Tarp"};
   char *items_3[] = {"Keys", "Pistol", "Rock", "Glass_Bottle", "Cell_Phone", "Radio", "Picture_Frame", "Stick", "Newspaper"};
   
   
   bag.item1 = items_1[rand_in_range(0, 8)];
   printf("Item 1:\t%s\n", bag.item1);
 
   bag.item2 = items_2[rand_in_range(0, 8)];
   printf("Item 2:\t%s\n", bag.item2);
   
   bag.item3 = items_3[rand_in_range(0, 8)]; 
   printf("Item 3:\t%s\n", bag.item3);
   
   
   
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

//print items in bag, and let the user pick an item to use to get to the next part of the story
int use_item(struct backpack bag, int choice)
{
  //print items
   printf("Item 1:\t%s\n", bag.item1);
   printf("Item 2:\t%s\n", bag.item2);
   printf("Item 3:\t%s\n", bag.item3);
   
   //ask the user to select an item
   
   
   //return selection
   
}
