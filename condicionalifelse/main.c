#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion if, else, else if \n");

    float valA, valB, valC;

    valA = 50;
    valB = 100;
    valC = 150;

    printf("Condicion: \n");

        if (valA == valB)
            printf("No se va a cumplir esta condicion");

        else if (valB == valC)
            printf("Tampoco se va a cumplir esta condicion");


        else
            //mas de una linea si va dentro de llaves
        {
            printf("Ninguna condicion se cumplio");
            printf("\n Despues de esta linea el programa se cerrara");

        }
    return 0;
}
