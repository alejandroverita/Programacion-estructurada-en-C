#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Archivos! Crear un archivo! \n");

    // Declaramos la variable file como puntero del tipo FILE.
    FILE *archivo;

    // Creamos archivo001.dat y guardamos su direccion en el apuntador "archivo".
    archivo = fopen ("archivo001.dat", "w");

    if (archivo != NULL)
    {
        printf("El archivo se ha creado exitosamente. Abre la carpeta");

        fclose(archivo);
    }
    else
    {
        printf("El archivo no se ha creado");

    }


    return 0;
}
