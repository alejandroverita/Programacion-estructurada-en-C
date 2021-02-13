#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Arreglos Bidimensionales.\n\n");

    int listaBidimensional[4][4];

    listaBidimensional[0][0] = 11;
    listaBidimensional[0][1] = 12;
    listaBidimensional[0][2] = 13;
    listaBidimensional[0][3] = 14;

    listaBidimensional[1][0] = 29;
    listaBidimensional[1][1] = 28;
    listaBidimensional[1][2] = 27;
    listaBidimensional[1][3] = 26;

    listaBidimensional[2][0] = 36;
    listaBidimensional[2][1] = 35;
    listaBidimensional[2][2] = 34;
    listaBidimensional[2][3] = 33;

    listaBidimensional[3][0] = 45;
    listaBidimensional[3][1] = 46;
    listaBidimensional[3][2] = 47;
    listaBidimensional[3][3] = 48;

    printf("Valor en (0,1): %i \n", listaBidimensional[0][1]);
    printf("Valor en (1,2): %i \n", listaBidimensional[1][2]);
    printf("Valor en (2,3): %i \n", listaBidimensional[2][3]);
    printf("Valor en (3,0): %i \n", listaBidimensional[3][3]);

    return 0;
}
