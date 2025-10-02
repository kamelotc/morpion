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



/* int main(int argc, char **argv)
{
    int  =0;
    switch (dice){
    case 1:
        printf("A1; A2; A3;");
        break;
    case 2:
        printf("B1; B2; B3;");
        break;
    case 3:
        printf("C1; C2; C3;");
        break;
    case 4:
        printf("A1; B1; C1;");
        break;
    case 5:
        printf("A2; B2; C2;");
        break;
    case 6:
        printf("A3; B3; C3;");
        break;
    case 7:
        printf("A1; B3; C3;");
        break;
    case 8:
        printf("A3; B2; C1;");
        break;
    
    }
}

        |_|_|_|
        |_|_|_|
        |_|_|_|
*/