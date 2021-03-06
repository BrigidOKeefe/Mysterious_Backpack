//game.h
//Brigid O'Keefe 04/12/2021
//Header file for final project

#ifndef GAME_H
#define GAME_H
//backpack structure
struct backpack
{
   char *item1, *item2, *item3;
};

//create new bag
struct backpack new_bag();

//function to create random number
int rand_in_range(int x, int y); 

//function to create a random list of numbers that doesn't repeat
int* rand_list(int *list, int length, int x, int y);

//function to print section of text separated by *
void print_section(FILE *fptr);

//function to print next scene
void print_scene(FILE *fptr, char *item);

//function to select next item
int pick_item(int answer);



#endif