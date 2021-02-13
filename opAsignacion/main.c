#include <stdio.h>
#include <stdlib.h>

int main()
{
    //reto 1

    int x = 10;

    printf("El valor de X es: %i \n", x);

    x+= 2 * x;

    printf("El nuevo valor de X es: %i \n", x);

    //reto 2

    int entero;
    int modulo = 5;
    printf("Ingresa un numero entero: ");
    scanf ("%i", &entero);

    entero = entero % modulo;

    printf("El modulo de 5 del entero que ingresaste es: %i \n", entero);

    entero ++;

    printf ("El incremento de tu entero es: %i \n", entero);
}


