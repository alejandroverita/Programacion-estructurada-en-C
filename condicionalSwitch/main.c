#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicional switch \n");

    int option;

    scanf ("%i", &option);

    switch (option)
    {
    case 1:
        printf("Elegiste el numero 1 \n");
        break;
    case 2:
        printf("Elegiste el numero 2 \n");
        break;

     case 3:
        printf("Elegiste el numero 3 \n");
        break;

     case 4:
        printf("Elegiste el numero 4 \n");
        break;

     default:
        printf("Elegiste una opcion invalida \n");
        break;

    }



    return 0;
}
