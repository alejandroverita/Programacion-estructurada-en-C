#include <stdio.h>
#include <stdlib.h>

int potenciacion(int base, int exponente)
{
    int res = pow(base, exponente);

    return res;
}

int main()
{
    /*Vamos a calcular la potencia de un numero
    INGRESAR un valor base
    Ingrear un valor de exponente
    Dentro de una funcion calcular el exponente del numero base
    Imprimir resultado
    */
    printf("Reto de funciones! \n");

    int base, exponente;

    printf("Ingresa el valor de la base: ");
    scanf("%i", &base);

    printf("Ingresa el valor del exponente: ");
    scanf("%i", &exponente);

    //variable para almacenar la funcion
    int potencia = potenciacion ( base, exponente);

    printf("El resultado de la potencia es: %i \n", potencia);

    return 0;
}
