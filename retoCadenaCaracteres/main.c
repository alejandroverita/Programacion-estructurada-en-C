#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Programa que reciba una cadena de caracteres e imprima de
    regreso la misma cadena de forma invertida
    */
    printf("Invertir la frase.\n\n");

    char frase[50];

    printf("Ingresa una frase: \n\n");

    gets(frase);

    //recorre letra por letra la frase
    for(int i = 0; i < strlen(frase); i++)
    {
        //imprime la longitud de la frase empezando desde atras
        printf("%c", frase[(strlen(frase) - 1) - i]);
    }

    return 0;
}
