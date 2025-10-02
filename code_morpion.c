#include <stdio.h>
#include <stdlib.h>


int main(void){


char grid[9] = {'_', '_', '_','_', '_', '_','_', '_', '_'};

char *A1 = &grid[0];
char *A2 = &grid[1];
char *A3 = &grid[2];
char *B1 = &grid[3];
char *B2 = &grid[4];
char *B3 = &grid[5];
char *C1 = &grid[6];
char *C2 = &grid[7];
char *C3 = &grid[8];



*A1 = '0';
*A2 = '0';
*A3 = '0';
*B1 = '0';
*B2 = '0';
*B3 = '0';
*C1 = '0';
*C2 = '0';
*C3 = '0';
}

