//game_main.c
//Brigid O'Keefe
//the main file for the mysterious backpack game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main(){

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