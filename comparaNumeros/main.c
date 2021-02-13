#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Esto es un reto \n");

    int numero1, numero2;

    printf("Ingresa un numero entero: ");

    scanf("%i", &numero1);

    printf("\n Ingresa un segundo numero entero: ");

    scanf("%i", &numero2);

    printf("\n El numero menor es: ");

    if (numero1 < numero2)
        printf("%i", numero1);

    else
        printf("%i", numero2);


    return 0;
}
