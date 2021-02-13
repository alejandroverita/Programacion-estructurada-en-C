#include <stdio.h>
#include <stdlib.h>

float cambioSucresDolares (float sucres)
{
    return sucres * 0.00004;
}

float cambioDolaresSucre(float dolares)
{
    return dolares * 25000;
}


int main()
{
    /*
    Hacer un programa de cambie de dolares a tu moneda y de tu moneda a dolares
    Usa funciones
    */


    printf("Cambio de moneda \n");

    float sucres;

    float dolares;

    float cantidad;

    float resultado;

    int opcion;



    printf("Si quieres cambiar sucres a dolares. Presiona 1 \n ");
    printf("Si quieres cambiar dolares a sucres. Presiona 2 \n ");

    scanf("%i", &opcion);

    printf("Ingresa la cantidad a cambiar: ");
    scanf("%f", &cantidad);

    if (opcion == 1)
    {
        resultado = cambioSucresDolares (cantidad);
        printf("El resultado es: %f", resultado);
    }

    else if (opcion == 2)
    {
        resultado = cambioDolaresSucre(cantidad);
        printf("El resultado es: %f", resultado);
    }

    else
    {
        printf("Opcion no valido");
    }

    return 0;
}
