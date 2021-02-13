#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Juego de texto\n");

    int numero;

    printf("Tienes 3 caminos para llegar a casa\n");

    printf("El primero es oscuro pero mas corto\n");

    printf("El segundo es alumbrado pero largo \n");

    printf("El tercero esta lleno de vicios y placeres \n");

    scanf("%i", &numero);

    switch (numero)

    {
    case 1:
        printf("Has elegido la primera historia");
        break;


    case 2:
        printf("Has elegido la segunda historia");
        break;

    case 3:
        printf("Has elegido la tercera historia");
        break;

    default:
        printf("No seas mamon, elige entre 1 y 3");
        break;
    }



    return 0;
}
