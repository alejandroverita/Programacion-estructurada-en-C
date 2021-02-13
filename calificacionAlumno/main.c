#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calificacion de un alumno \n");

    int calificacion;

    printf("Ingresa la calificacion del alumno sobre 100: \n");

    scanf ("%i", &calificacion);

    if (calificacion < 60)
        printf("Esta reprobado");
    else
        printf("Esta aprobado");

    if (calificacion > 90)

        printf("\n Felicidades!! =D ");

    return 0;
}
