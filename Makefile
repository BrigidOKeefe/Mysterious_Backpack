# Makefile
# makefile for final project
# Brigid O'Keefe


CXX = gcc

game_main:  game_main.o game_functions.o
	$(CXX) -o game_main game_main.o game_functions.o
   
game_main.o:  game_main.c 
	$(CXX) -c $*.c

game_functions.o:  game_functions.c 
	$(CXX) -c $*.c



