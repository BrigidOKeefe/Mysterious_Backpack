//game_main.c
//Brigid O'Keefe
//the main file for the mysterious backpack game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main(){
   
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
               // Read contents from file
               c = fgetc(fptr);
               while (c != '*')
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
    

               //create backpack
               struct backpack bag = new_bag();
               printf("%s\n", bag.item1);
               printf("%s\n", bag.item2);
               printf("%s\n", bag.item3);
   
               //scene one 
               
               //scene two
               
               //scene three
      
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