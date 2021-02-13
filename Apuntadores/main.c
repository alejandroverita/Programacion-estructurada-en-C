#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Apuntadores \n");

    float val;

    float *apVal;

    apVal = &val;

    *apVal = 3.1416;

    printf("La valor de la variable val es: %f", val);


    return 0;
}
