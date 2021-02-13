#include <stdio.h>
#include <stdlib.h>

char nombreAlumno[50];
float calif;

void evaluar()
{
    if(calif >= 7.0)
        printf("El alumno %s ha sido aprobado. \n\n", nombreAlumno);
    else
        printf("El alumno %s ha sido reprobado. \n\n", nombreAlumno);
}



int main()
{
    /*
    Utilizando variables globales ingresa el nombre de un alumno
    y su calificacion.
    En una funcion evalua si el alumno ha sido aprobado o no
    La calificacion minima es 7
    Imprimir desde la funcion si el alumno aprobo
    */

    printf("Variables locales y globales \n");


    printf("Calificacion.\n\n");
    printf("Ingresa el nombre: ");

    gets(nombreAlumno);

    printf("Ingresa la calificacion: ");
    scanf("%f", &calif);

    evaluar(nombreAlumno, calif);

    return 0;
}
