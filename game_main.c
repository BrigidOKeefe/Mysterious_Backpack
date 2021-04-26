//game_main.c
//Brigid O'Keefe
//the main file for the mysterious backpack game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"


int main(){

printf("The Mysterious Backpack \n\tGame By Brigid O'Keefe\n\n");

//load diolog file, and create text buffer
FILE *text;
text = fopen("/Mysterious_Backpack-main/diolog.txt", "r");
char *buff;


int option = 1;

while(option)
{
   printf("\nMAIN MENU:\n1.Play Game\n0.Exit\nSelect an option:  ");
   scanf("%d",&option);
   
   switch(option)
   {
   
      case(1):
      {
      
         //intro dialog
         fscanf(text, "%[^\n]", &buff);
         printf("\n%s\n", buff);
         
         //create backpack
         struct backpack bag = new_bag();
        // use_item(bag, 1);
         
         
         //scene one 
         
         //ask for response
         
         //scene two
         
         //player response
         
         //scene three
         
         //player response
         
         //ending text.

         break;
      }
      
      //exit game
      case(0):
      {
         fclose(text);
         return option;
      }  
      //invalid response
      default:
      {
         printf("Please enter a vaild number...");
      } 
      
   }


}



}