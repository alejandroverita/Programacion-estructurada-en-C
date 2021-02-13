#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Crea un arreglo de 3 filas por 4 columnas en donde:
    //Los elementos de la primer fila sumen un total de 4;
    //Los elementos de la segunda fila sumen un total de 10;
    //Los elementos de la tercer fila sumen un total de 26;
    //Imprime la sumatorias de cada fila
    printf("Arreglos bidimensionales reto \n");

    int arreglo[3][4];
    int sumaPrimeraFila;
    int sumaSegundaFila;
    int sumaTerceraFila;

    arreglo[0][0] = 0;
    arreglo[0][1] = 1;
    arreglo[0][2] = 2;
    arreglo[0][3] = 1;

    arreglo[1][0] = 3;
    arreglo[1][1] = 3;
    arreglo[1][2] = 3;
    arreglo[1][3] = 1;

    arreglo[2][0] = 8;
    arreglo[2][1] = 7;
    arreglo[2][2] = 9;
    arreglo[2][3] = 2;

    sumaPrimeraFila= arreglo[0][0] + arreglo[0][1] + arreglo[0][2] + arreglo[0][3];
    sumaSegundaFila= arreglo[1][0] + arreglo[1][1] + arreglo[1][2] + arreglo[1][3];
    sumaTerceraFila= arreglo[2][0] + arreglo[2][1] + arreglo[2][2] + arreglo[2][3];

    printf("El resultado de la primera fila es: %i \n", sumaPrimeraFila );
    printf("El resultado de la segunda fila es: %i \n", sumaSegundaFila );
    printf("El resultado de la tercera fila es: %i \n", sumaTerceraFila );


    return 0;
}
