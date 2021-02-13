#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iteradores do While \n");

    char answer = 'q';

    char value;

    do
    {
        printf("Ingresa una letra ");
        scanf("%c", &value);
    } //si la letra que ingrese es diferente a answer me lo va a volver a preguntar
    while(value != answer); //evalua si la condicion es verdadera
    //Si condicion es falsa, se sale del loop y continua el programa

   printf("Coinciden las letras  %c == %c", value, answer) ;
    return 0;
}
