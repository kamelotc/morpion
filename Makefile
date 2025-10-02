CC := gcc
FLAGS := -std=c99 -Wall -Werror -Wextra

build : 
	$(CC) $(FLAGS) code_morpion.c -o bin/main