#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cadena de Caracteres \n");

    char nameC[50];
    int size;
    printf("Leer nombre con gets: \n");
    //gets: permite leer una cadena incluyendo espacios y termina cuando lee el fin de linea: \n
    gets(nameC);

    printf("El nombre es: \n");
    //puts: Imprime la cadena hasta que detecta el fin de linea \0 o \n.
    puts(nameC);

    size = strlen(nameC);
    printf("\n El tamanio de la cadena es: %i \n\n", size);
    return 0;
}
