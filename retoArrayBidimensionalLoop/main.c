#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Array Bidimesional - Promedio de calificaciones.\n\n");

    /*
    Crea un arreglo de 5 filas por 6 columnas en donde:
    1.Los  primeros 5 elementos cada fila tengan calificaciones
    aprobatorias entre 6 y 10.
    2.El sexto elemento de cada fila debe ser 0.
    Despues:
    3.Calcula el promedio de los primeros 5 elmentos de cada fila y asignalo al sexto elemento.
    4.Imprime el promedio de cada fila de calificaciones.
    */

    int suma=0;
    float promedio;

    double promedioCal[5][6] = {{6,8,7,9,7,0},
                         {8,4,9,5,9,0},
                         {9,6,6,9,10,0},
                         {7,2,4,8,9,0},
                         {9,6,5,10,4,0}};

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("La posicion [%i][%i] es: %d \n", i, j, promedioCal[i][j]);
            suma+=promedioCal[i][j];


        }
        promedioCal[i][6]= suma / 5;
        printf("\n El promedio de la fila %i es: %d \n\n", i, promedioCal[i][6]);
        //reinicio el valor de la suma para que a la siguiente
        //vuelta la suma empiece de nuevo en 0;
        suma=0;
    }



    return 0;
}
