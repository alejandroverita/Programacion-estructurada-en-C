#include <stdio.h>
#include <stdlib.h>

int factorial (int n)
{
    printf("Entra a la funcion factorial, n vale: %i \n", n);

    if (n > 1)
    {
        printf("La funcion se llamara a si misma otra vez \n");
        return n * factorial (n-1);
    }
    else{
        printf("N es igual a 1. Termina la recursividad");

        return 1;
    }
}


int main()
{
    printf("Recursividad \n");

    int result = factorial (5) ;

    printf ("\n EL resultado es: %i", result);

    return 0;
}
