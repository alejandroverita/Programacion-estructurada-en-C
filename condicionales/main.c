#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables en una linea sin asignacion
    float valA, valB, valC;
    //Los dos valores valen lo mismo
    valA = valB = 100;

    printf("Primera condicion \n");

        if (valA == valB)
            printf("Ambos son iguales \n");

        printf("Segunda condicion");
        // va entre corchetes pues tiene mas de un valor a evaluar
        if (valA == valB)
        {
            valC = valA + valB;
            printf("\nAdemas la suma de ambos es: %f", valC);

        }

    return 0;
}
