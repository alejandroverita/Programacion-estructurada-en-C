#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Escribir un programa que nos diga el numero mas grande
    //de un arreglo. Utilizando arrglos e iteradores
    printf("Numero grande array\n");

    int tamanoArray;
    int numeroMayor= 0;

    printf("Ingresa el tamano del arreglo \n");
    scanf("%i", &tamanoArray);

    //la longitud del arreglo es dada por el usuario
    int arreglo[tamanoArray];

    //Se llena el arreglo

    for (int i = 0; i < tamanoArray; i++)
    {
        //a cada vuelta se llena de un nuevo valor en una nueva posicion
        printf("\n Ingrese un entero: ");
        scanf("%i", &arreglo[i]);
    }

    //Buscar numero mayor
    for (int i = 0; i < tamanoArray; i++)
    {
        //evalua si es mayor y se le asigna el numero
        //si es menor entonces no se le asigna el nuevo numero
        if(arreglo[i] > numeroMayor)
            numeroMayor = arreglo [i];
    }

    printf("\n El numero mayor es: %i \n", numeroMayor);

    return 0;
}
