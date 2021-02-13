#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ingresar valores a un arreglo con un tamanio de 5.
    //Multiplicar todos sus valores
    //Imprimir resultado

    printf("Ingresar valores a un arreglo con un tamano de 5 \n");


    int arreglo[5];
    int resultado =1;


    printf("Ingresa 1 valor ");
    scanf ("%i", &arreglo[0]);

    printf("Ingresa 2 valor ");
    scanf ("%i", &arreglo[1]);

    printf("Ingresa 3 valor ");
    scanf ("%i", &arreglo[2]);

    printf("Ingresa 4 valor ");
    scanf ("%i", &arreglo[3]);

    printf("Ingresa 5 valor ");
    scanf ("%i", &arreglo[4]);


    for (int i =0; i < 5; i++)
    {
        resultado= resultado*arreglo[i];
    }

    printf("El resultado de la multiplicacion es: %i \n", resultado);


    return 0;
}
