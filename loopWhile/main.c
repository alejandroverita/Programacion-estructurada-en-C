#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador while \n");

    int limit;

    printf("Ingresa un numero entero: \n");

    scanf("%i", &limit);

    int i = 1;

    //mientras que la variable i sea menor o igual que el limite
    // se imprimira el numero y se sumara 1
    while (i <= limit)
    {
        printf("Numero: %i \n", i);
        i++;
    }


    return 0;
}
