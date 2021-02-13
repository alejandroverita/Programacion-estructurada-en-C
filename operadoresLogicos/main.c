#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorA, valorB, valorC;

    valorA = 5;
    valorB = valorC = 10;

    if ((valorA<valorB) && (valorB== valorC))
        printf("Se cumplieron las dos condiciones \n");
    else
        printf("No se cumplieron las dos condiciones");


    if ((valorA > valorB) || (valorA <= valorC))

        printf("Se cumplieron por lo menos una condicion \n");
    else

        printf("No se cumplieron las dos condiciones");



    return 0;
}
