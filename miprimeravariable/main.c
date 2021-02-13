#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA;
    float floatA;
    char letterA;

    //Imprimiendo las variables
    printf("Ingresa el valor del flotante: ");

    scanf("%f", &floatA);

    printf("Ingresa el valor del caracter: ");

    scanf(" %c", &letterA);

    printf("El caracter A es: %f \n", floatA);
    printf("El flotante A es: %c \n", letterA);

    return 0;
}
