#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Imprime simbolo # en filas \n");

    int simbolo;
    int i = 1;


    printf("Ingresa cuantas veces quieres el signo # \n");

    scanf("%i", &simbolo);


    while (i <= simbolo)
    {
        printf("# numero: %i \n", i);
        i++;
    }




    return 0;
}
