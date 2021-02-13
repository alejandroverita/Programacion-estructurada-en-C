#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Fibonnacci \n");

    int primerNumero=0;
    int segundoNumero =1;
    int limite;

    printf("Hasta que numero quieres la secuencia Fibonnacci?: ");

    scanf("%i", &limite);

    for ( int i =0; i <= limite; i++)
    {
        printf("%i \n", primerNumero);

        primerNumero= primerNumero + segundoNumero;
        segundoNumero= primerNumero - segundoNumero;
    }

    return 0;
}
