//game_main.c
//Brigid O'Keefe
//the main file for the mysterious backpack game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main()
{
   FILE *fptr;//file pointer
   char c;
   
   // Open file
   fptr = fopen("diolog.txt", "r");
   if (fptr == NULL)
    {
      printf("Error loading text files. \n");
      exit(0);
    }
    
   else
    {
      printf("The Mysterious Backpack \n\tGame By Brigid O'Keefe\n\n");
   
      int option = 1;
   
      while(option)
      {
          printf("\nMAIN MENU:\n1.Play Game\n0.Exit\nSelect an option:  ");
          scanf("%d",&option);
      
         switch(option)
         {
         
            case(1):
            {
               //Intro text:
               fseek(fptr, 0, SEEK_SET);
               print_section(fptr);

               //create backpack
               struct backpack bag = new_bag();
               
               
               //print bag items
               printf("1.%s\n", bag.item1);
               printf("2.%s\n", bag.item2);
               printf("3.%s\n", bag.item3);
               
               //scene one           
               print_section(fptr);
               pick_item(2);              
               print_scene(fptr,bag.item2);          
             
               //scene two
               pick_item(1);
               print_scene(fptr,bag.item1);          
               //scene three
               pick_item(3);
               print_scene(fptr,bag.item3); 
                
               break;
            }
            
            case(0):
            {
               return option;
            }  
         }

      }
    }  
}