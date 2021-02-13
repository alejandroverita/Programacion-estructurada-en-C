#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = (rand()%10)+1;
    int intento;
    int decision;

    printf("Adivina el numero que estoy pensando: \n");
    scanf("%i", &intento);

    if(numero == intento)
    {
        printf("Adivinaste, sos un genio \n");
    }
    else
    {
        printf("Ese no era =( . El numero era: %i ", numero);
    }
    return 0;
}
