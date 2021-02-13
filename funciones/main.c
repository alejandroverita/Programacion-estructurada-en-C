#include <stdio.h>
#include <stdlib.h>

int Addition(int a, int b)
{
    //devuelve el resultado de la suma de los dos enteros
    int res = a + b;

    //regresa el tipo de dato de la funcion
    return res;
}

int main()
{
    printf("Funciones! \n");

    //este entero es igual a la funcion, entonces la llama.
    //como la funcion es un entero, lo igualo a otra funcion del mismo tipo de dato
    int additionRes = Addition(3,4);

    printf("Resultado es: %i", additionRes);

    return 0;
}
