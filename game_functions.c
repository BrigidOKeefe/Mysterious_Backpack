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
   char *items_1[] = {"Knife", "Rope", "Fishing Rod"};
   char *items_2[] = { "Map","Compass","GPS" };
   char *items_3[] = {"Flint_and_steel", "Magnifying_Glass", "Lighter"};
   
   
   bag.item1 = items_1[rand_in_range(0, 2)];
   bag.item2 = items_2[rand_in_range(0, 2)];
   bag.item3 = items_3[rand_in_range(0, 2)]; 
   
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


//function to print section of text separated by *
void print_section(FILE *fptr)
{
   char c = fgetc(fptr);
   while ((c != '*')&&(c != EOF))
   {
      printf ("%c", c);
      c = fgetc(fptr);
   }
}

//function to print next scene
void print_scene(FILE *fptr, char *item)
{
   print_section(fptr);
   printf("%s",item);
   print_section(fptr);
   printf("%s",item);
   print_section(fptr);
}

//function to select next item
int pick_item(int answer)
{
   int usedItem = 0;
   while (usedItem != answer)
   {
      scanf("%d",&usedItem);
      if(usedItem != answer)
      {
         printf("That's not going to help\nSelect an item: ");
      }
   }
 
}