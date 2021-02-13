#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio;
    float altura;
    float pi = 3.1415;
    float formulaArea;
    float formulaVolumen;

    printf("Ingresa el radio de la base: ");
    scanf("%f", &radio);

    printf("Ingresa la altura del cilindro: ");
    scanf("%f", &altura);

    //Formulas
    formulaArea = 2 * pi * radio * (radio + altura);
    formulaVolumen = pi * (radio * radio) * altura;

    printf("El area base del cilindro es: %f \n", formulaArea);
    printf("El volumen del cilindro es: %f \n", formulaVolumen);


    //Conversion de fahrenhei a Celsius
    float F;
    float C;
    float convertor;

    printf("Introduce temperatura en Fahrenheits: ");
    scanf("%f", &F);
    // formulas
    convertor= (F-32) / 1.8;
    C= convertor;

    printf("Tu temperatura en Celsius: %f", C );

    return 0;
}
