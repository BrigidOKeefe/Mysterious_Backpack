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
         int num = rand_in_range(0, 4);
         printf("%d", num);
         break;
      }
      
      case(0):
      {
         return option;
      }  
   }


}



}