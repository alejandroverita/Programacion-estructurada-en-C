#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    printf("Librerias \n");


    float firstValue =10;
    float secondValue =15;

    float result;

    int option;

    char next = 'y';
    while(next == 'y'){

        printf("Soy una calculadora simple y aburrida \n");
        printf("Que operacion deseas realizar que pueda ayudarte? \n");
        printf("1. Suma \n");
        printf("2. Resta \n");
        printf("3. Multiplicacion \n");
        printf("4. Division \n");

        printf("Elige una opcion \n");

        scanf("%i", &option);

        switch(option){
          case 1:
          printf("SUMA\n");
          printf("Primer valor: ");
          scanf(" %f", &firstValue);
          printf("Segundo valor: ");
          scanf(" %f", &secondValue);
          result = addition(firstValue, secondValue);
          printf("Resultado: %.2f\n", result);
          break;

          case 2:
          printf("RESTA\n");
          printf("Primer valor: ");
          scanf(" %f", &firstValue);
          printf("Segundo valor: ");
          scanf(" %f", &secondValue);
          result = sustraction(firstValue, secondValue);
          printf("Resultado %.2f\n", result);
          break;

          case 3:
          printf("MULTIPLICACION\n");
          printf("Primer valor: ");
          scanf(" %f", &firstValue);
          printf("Segundo valor: ");
          scanf(" %f", &secondValue);
          result = multiplication(firstValue, secondValue);
          printf("Resultado: %.2f\n", result);
          break;

          case 4:
          printf("DIVISION\n");
          printf("Primer valor: ");
          scanf(" %f", &firstValue);
          printf("Segundo valor: ");
          scanf(" %f", &secondValue);
          result = division(firstValue, secondValue);
          printf("Resultado: %.2f\n", result);
          break;

          default:
          printf("Opcion no valida\n");
          break;
        }

        printf("Deseas continuar y/n?:\n");
        scanf(" %c", &next);
    }



    return 0;
}
