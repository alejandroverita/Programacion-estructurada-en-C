# Curso de Programación Estructurada


## INTRODUCCIÓN AL CURSO
La programación estructurada es una técnica para escribir programas orientados a mejorar la claridad, calidad y tiempo de desarrollo de un programa de computadora recurriendo únicamente a subrutinas y tres estructuras básicas: secuencia, selección (if y switch) e iteración (bucles for y while)

<br>

------------

## CONCEPTOS BÁSICOS
### SET UP DE CODEBLOCKS Y COMPILADOR
Un entorno de desarrollo integrado o entorno de desarrollo interactivo, en inglés Integrated Development Environment (IDE), es una aplicación informática que proporciona servicios integrales para facilitarle al desarrollador o programador el desarrollo de software.

Code :: Blocks es un IDE multiplataforma gratuito y de código abierto que admite múltiples compiladores, incluidos GCC, Clang y Visual C ++.

### ¿QUÉ ES UN COMPILADOR?
En informática, un compilador es un tipo de traductor que transforma un programa entero de un lenguaje de programación a otro. Usualmente el lenguaje objetivo es código máquina, aunque también puede ser traducido a un código intermedio o a texto.

### QUÉ ES OPEN SOURCE?
El código abierto es un modelo de desarrollo de software basado en la colaboración abierta. Se enfoca más en los beneficios prácticos que en cuestiones éticas o de libertad que tanto se destacan en el software libre. Para muchos el término «libre» hace referencia al hecho de adquirir un software de manera gratuita.

<br>

------------


## Variables y tipos de datos (Asignación y clasificación)
### Diseño de programas de software

- Análisis
- Diseño
- Programación
- Codificación
- Prueba
- Mantenimiento
- Documentación

Un tipo de dato es una clasificación que el programador le da a la información almacenada para avisarle al compilador cómo va a ser interpretada.

### Tipos de datos primitivos:

- Numéricos: int (números enteros), float (números decimales)
- Caracteres: char
- Booleanos: bool (True or false)

Una variable es un espacio reservado en memoria, definido por un tipo de dato y un nombre asignado, en el cual se puede guardar un valor y se puede modificar.


[========]

## Entrada y salida de datos

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    
    int main()
    {
        int integerA;
        float floatA;
        char letterA;
    
        //Imprimiendo las variables
        printf("Ingresa el valor del flotante: ");
    
        scanf("%f", &floatA);
    
        printf("Ingresa el valor del caracter: ");
    
        scanf(" %c", &letterA);
    
        printf("El caracter A es: %f \n", floatA);
        printf("El flotante A es: %c \n", letterA);
    
        return 0;
    }
    


[========]

## Operadores aritméticos

Los operadores los utilizamos para realizar operaciones aritméticas en nuestras funciones. Algunos operadores son:

Suma: +
Resta: -
Multiplicación: *
División: /
Módulo: %
La operación módulo obtiene el resto de la división entre dos números.

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
    
	

<br>

[========]

## Operadores de asignación, de incremento y decremento

- a += 5. 
a = a + 5
- a -= 5. 
a = a – 5
- a*= 5. 
a = a * 5
- a/= 5. 
a = a / 5
- a%= 5. 
a = a % 5



    
    int main()
    {
        //reto 1
    
        int x = 10;
    
        printf("El valor de X es: %i \n", x);
    
        x+= 2 * x;
    
        printf("El nuevo valor de X es: %i \n", x);
    
        //reto 2
    
        int entero;
        int modulo = 5;
        printf("Ingresa un numero entero: ");
        scanf ("%i", &entero);
    
        entero = entero % modulo;
    
        printf("El modulo de 5 del entero que ingresaste es: %i \n", entero);
    
        entero ++;
    
        printf ("El incremento de tu entero es: %i \n", entero);
    }
    
    
    
<br>

[========]


## Condicional if e if - else

Las condicionales son instrucciones que evalúan resultados booleanos (true or false), generalmente usados para alterar el flujo de un programa.

Una sentencia condicional es una instrucción o grupo de instrucciones que se pueden ejecutar o no en función del valor de una condición.

Ejemplo:

    main(){
            if (vidasExtras == 0){
                    printf(""Game Over"");
            }
    }
    

   Codigo de la clase If:


```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables en una linea sin asignacion
    float valA, valB, valC;
    //Los dos valores valen lo mismo
    valA = valB = 100;

    printf("Primera condicion \n");

        if (valA == valB)
            printf("Ambos son iguales \n");

        printf("Segunda condicion");
        // va entre corchetes pues tiene mas de un valor a evaluar
        if (valA == valB)
        {
            valC = valA + valB;
            printf("\nAdemas la suma de ambos es: %f", valC);

        }

    return 0;
}
```


Codigo de la clase if, else, elseif



```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion if, else, else if \n");

    float valA, valB, valC;

    valA = 50;
    valB = 100;
    valC = 150;

    printf("Condicion: \n");

        if (valA == valB)
            printf("No se va a cumplir esta condicion");

        else if (valB == valC)
            printf("Tampoco se va a cumplir esta condicion");


        else
            //mas de una linea si va dentro de llaves
        {
            printf("Ninguna condicion se cumplio");
            printf("\n Despues de esta linea el programa se cerrara");

        }
    return 0;
}
```

Reto

    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int numero = (rand()%10)+1;
        int intento;
        int decision;
    
        printf("Adivina el numero que estoy pensando: \n");
        scanf("%i", &intento);
    
        if(numero == intento)
        {
            printf("Adivinaste, sos un genio \n");
        }
        else
        {
            printf("Ese no era =( . El numero era: %i ", numero);
        }
        return 0;
    }


<br>

------------



## Operadores relacionales y lógicos
Los operadores relacionales son:

- Menor que (<)
- Menor o igual que (<=)
- Mayor que (>)
- Mayor o igual que (>=)
- Igual que (==) : Comparación
- No igual que (!=) : Diferente

Los operadores lógicos son:

- AND (&&) : Y
- OR (||) : O
- NOT (!) : No


### Operadores relaciones


```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valA, valB;
    valA = 5;
    valB = 10;

    if (valA< valB)
        printf("Pregunta 1: Cierto \n");

    else
        printf("Pregunta 1: False \n");


    if (valA<= valB)
        printf("Pregunta 2: Cierto \n");

    else
        printf("Pregunta 2: False \n");


    if (valA> valB)
        printf("Pregunta 3: Cierto \n");

    else
        printf("Pregunta 3: False \n");


    if (valA >= valB)
        printf("Pregunta 4: Cierto \n");

    else
        printf("Pregunta 4: False \n");


    if (valA == valB)
        printf("Pregunta 5: Cierto \n");

    else
        printf("Pregunta 5: False \n");


    if (valA != valB)
        printf("Pregunta 6: Cierto \n");

    else
        printf("Pregunta 6: False \n");



    return 0;
}
```


### Operadores logicos 



```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorA, valorB, valorC;

    valorA = 5;
    valorB = valorC = 10;

    if ((valorA<valorB) && (valorB== valorC))
        printf("Se cumplieron las dos condiciones \n");
    else
        printf("No se cumplieron las dos condiciones");


    if ((valorA > valorB) || (valorA <= valorC))

        printf("Se cumplieron por lo menos una condicion \n");
    else

        printf("No se cumplieron las dos condiciones");



    return 0;
}
```


#### Reto 1 



```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Esto es un reto \n");

    int numero1, numero2;

    printf("Ingresa un numero entero: ");

    scanf("%i", &numero1);

    printf("\n Ingresa un segundo numero entero: ");

    scanf("%i", &numero2);

    printf("\n El numero menor es: ");

    if (numero1 < numero2)
        printf("%i", numero1);

    else
        printf("%i", numero2);


    return 0;
}

```


#### Reto 2



```
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

```

<br>

[========]

## ¿Qué es un iterador? - Ciclo While

Un loop es una estructura iterativa que permite repetir un bloque de instrucciones. Esta repetición es controlada por una condición booleana.

Un iterador es utilizado por un algoritmo para recorrer los elementos almacenados en un contenedor. Dado que los distintos algoritmos necesitan recorrer los contenedores de diversas maneras para realizar diversas operaciones, y los contenedores deben ser accedidos de formas distintas, existen diferentes tipos de iteradores.

### While
Es una estructura de control en la que la repetición se realizará tantas veces como se indique mientras se cumpla una condición.

Ciclo while 



```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador while \n");

    int limit;

    printf("Ingresa un numero entero: \n");

    scanf("%i", &limit);

    int i = 1;

    //mientras que la variable i sea menor o igual que el limite
    // se imprimira el numero y se sumara 1
    while (i <= limit)
    {
        printf("Numero: %i \n", i);
        i++;
    }


    return 0;
}
```


Reto



```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Imprime simbolo # en filas \n");

    int simbolo;
    int i = 1;


    printf("Ingresa cuantas veces quieres el signo # \n");

    scanf("%i", &simbolo);


    while (i <= simbolo)
    {
        printf("# numero: %i \n", i);
        i++;
    }




    return 0;
}
```


<br>

[========]

## Ciclo For
El ciclo for es una estructura de control que nos permite repetir un bloque de comandos un número de veces específico.

Este ciclo se compone de tres partes:

1. Inicializac Se inicializa una variable (generalmente ““i””) al asignarle el valor 0.

2. Condicional a condición necesaria para que termine el ciclo.

3. ncremento: También puede ser decremento; este va a indicar los pasos en los que se moverá el ciclo, este número siempre debe ser entero, para ir de uno en uno se utiliza el i++.


```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador FOR \n");

    int upperLim, bottomLim;
    printf("Imprimir en orden descendiente \n");


    printf("Ingresar limite superior \n");

    scanf("%i", &upperLim);

    printf("Ingresar limite inferior \n");

    scanf("%i", &bottomLim);


    for (int i = upperLim; i >= bottomLim ; i--)
    {
        printf("Numero: %i \n", i);
    }


    return 0;
}
```


**RETO**

++[Secuencia Fibonnacci](https://es.wikipedia.org/wiki/Sucesi%C3%B3n_de_Fibonacci)++

Cada término es la suma de los dos anteriores



```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Fibonnacci \n");

    int primerNumero=0;
    int segundoNumero =1;
    int limite;

    printf("Hasta que numero quieres la secuencia Fibonnacci?: ");

    scanf("%i", &limite);

    for ( int i =0; i <= limite; i++)
    {
        printf("%i \n", primerNumero);

        primerNumero= primerNumero + segundoNumero;
        segundoNumero= primerNumero - segundoNumero;
    }

    return 0;
}
```


<br>

[========]


## Ciclo Do-While
El Do - While es una estructura de control donde la condición de continuación del ciclo se prueba al final del mismo.
Funciona de manera similar a la estructura while, la diferencia es que esta evalúa al final.

Diferencias entre For, While y Do-While:

- For: Permite repetir un bloque de comandos un número de veces específico, tiene 3 partes: Inicialización, Condición y Cambio de la variable (Incremento o Decremento). Útil para recorrer arreglos.

- While: Se repiten las instrucciones mientras la condición es verdadera (se detiene hasta que no se cumple, en el caso de que no sea verdad al principio, no entrará al bucle).

- Do-While: Se ejecuta al menos una vez, primero hace el bloque de instrucciones y después evalúa la condición. Útil para hacer un Menú.

Ciclo Do-While



```
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
```


**Reto**



```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("100 primeros numeros \n");

    int numero=0;

    do
    {
        printf("%i \n", numero);
        numero++;
    }
    while (numero <= 100);



    return 0;
}
```




<br>

[========]


## Arreglos unidimensionales
Un arreglo es una serie de elementos, del mismo tipo de dato y son almacenados de manera consecutiva. En programación, la primera posición de los arreglos empieza en "“0"”.

Codigo de la clase: 



```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidireccionales \n");

    //tipo de dato nombre del arreglo extension del arreglo
    int integerList [3];

    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList[] = {23.4, 34.5, 45.6, 21.8, 56.7};

    char charList[4];
    charList[0] = 'D';
    charList[1] = 'A';
    charList[2] = 'N';
    charList[3] = 'I';


    //\t\t equivale a 4 espacios o 1 tab
    printf("\n Primer entero: \t\t %i", integerList[0]);
    printf("\n Ultimo flotante: \t\t %f", floatList[4]);
    printf("\n Lista de caracteres: \t\t %c%c%c%c. \n", charList[0], charList[1], charList[2], charList[3] );
    return 0;
}
```


Reto



```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ingresar valores a un arreglo con un tamanio de 5.
    //Multiplicar todos sus valores
    //Imprimir resultado

    printf("Ingresar valores a un arreglo con un tamano de 5 \n");


    int arreglo[5];
    int resultado =1;


    printf("Ingresa 1 valor ");
    scanf ("%i", &arreglo[0]);

    printf("Ingresa 2 valor ");
    scanf ("%i", &arreglo[1]);

    printf("Ingresa 3 valor ");
    scanf ("%i", &arreglo[2]);

    printf("Ingresa 4 valor ");
    scanf ("%i", &arreglo[3]);

    printf("Ingresa 5 valor ");
    scanf ("%i", &arreglo[4]);


    for (int i =0; i < 5; i++)
    {
        resultado= resultado*arreglo[i];
    }

    printf("El resultado de la multiplicacion es: %i \n", resultado);


    return 0;
}

```



<br>

[========]


## Arreglos bidireccionales

Los arreglos bidimensionales son también llamados tablas o matrices.

Tiene dos índices: el primero indica el número de fila y el segundo el número de columna en que se encuentra el elemento.

    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
       printf("Arreglos Bidimensionales.\n\n");
    
        int listaBidimensional[4][4];
    
        listaBidimensional[0][0] = 11;
        listaBidimensional[0][1] = 12;
        listaBidimensional[0][2] = 13;
        listaBidimensional[0][3] = 14;
    
        listaBidimensional[1][0] = 29;
        listaBidimensional[1][1] = 28;
        listaBidimensional[1][2] = 27;
        listaBidimensional[1][3] = 26;
    
        listaBidimensional[2][0] = 36;
        listaBidimensional[2][1] = 35;
        listaBidimensional[2][2] = 34;
        listaBidimensional[2][3] = 33;
    
        listaBidimensional[3][0] = 45;
        listaBidimensional[3][1] = 46;
        listaBidimensional[3][2] = 47;
        listaBidimensional[3][3] = 48;
    
        printf("Valor en (0,1): %i \n", listaBidimensional[0][1]);
        printf("Valor en (1,2): %i \n", listaBidimensional[1][2]);
        printf("Valor en (2,3): %i \n", listaBidimensional[2][3]);
        printf("Valor en (3,0): %i \n", listaBidimensional[3][3]);
    
        return 0;
    }

Reto

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

<br>

[========]

## Arreglos e iteradores unidimensionales

¿Por qué utilizar iteradores en arreglos unidimensionales?

Para manipular todos los elementos de un arreglo podemos utilizar una estructura repetitiva. La más usual es el ciclo for.
Cuando se desea imprimir el contenido del arreglo
Cuando se suman todos los elementos
También cuando se va a inicializar el arreglo.

Arreglos e iteradores unidimensionales

Codigo de la clase



```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos e iteradores \n");

    //declarado pero sin valores dentro
    int integerArray[11];

    for (int i = 0; i < 11; i++)
    {
        integerArray[i] = i*i;
        printf("Valor (%i): %i \n", i, integerArray[i]);
    }


    return 0;
}
```


Reto
    
    
      #include <stdio.h>
        #include <stdlib.h>
        
        int main()
        {
            //Escribir un programa que nos diga el numero mas grande
            //de un arreglo. Utilizando arrglos e iteradores
            printf("Numero grande array\n");
        
            int tamanoArray;
            int numeroMayor= 0;
        
            printf("Ingresa el tamano del arreglo \n");
            scanf("%i", &tamanoArray);
        
            //la longitud del arreglo es dada por el usuario
            int arreglo[tamanoArray];
        
            //Se llena el arreglo
        
            for (int i = 0; i < tamanoArray; i++)
            {
                //a cada vuelta se llena de un nuevo valor en una nueva posicion
                printf("\n Ingrese un entero: ");
                scanf("%i", &arreglo[i]);
            }
        
            //Buscar numero mayor
            for (int i = 0; i < tamanoArray; i++)
            {
                //evalua si es mayor y se le asigna el numero
                //si es menor entonces no se le asigna el nuevo numero
                if(arreglo[i] > numeroMayor)
                    numeroMayor = arreglo [i];
            }
        
            printf("\n El numero mayor es: %i \n", numeroMayor);
        
            return 0;
        }
    

Se me complico este reto, pero gracias a los aportes de los companeros pude entender la logica en esto.

<br>

[========]


## Arreglos e iteradores bidimensionales

Para poder utilizar el iterador for junto con un arreglo bidimensional es necesario entender el concepto de un for anidado. Esto es un for dentro de un for, la sintaxis es la siguiente:

    for(i=0;i<2;i++){
            for(j=0;j<1;j++){
                    printf(""%i,matriz[i][j]"");
            }
    }
	
En esta estructura al iniciar el for, se recorre vuelta por vuelta ambos fors, iniciando por la primera vuelta del primer for y continuando con todas las vueltas del segundo for. Siguiendo con la siguiente vuelta del primer for y continuando con todas las vueltas del segundo for, y así sucesivamente.

Esto es muy útil para recorrer arreglos bidimensionales.

Reto

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
    
        int promedioCal[5][6] = {{6,8,7,9,7,0},
                             {8,4,9,5,9,0},
                             {9,6,6,9,10,0},
                             {7,2,4,8,9,0},
                             {9,6,5,10,4,0}};
    
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                printf("La posicion [%i][%i] es: %i \n", i, j, promedioCal[i][j]);
                suma+=promedioCal[i][j];
    
    
            }
            promedioCal[i][6]= suma / 5;
            printf("\n El promedio de la fila %i es: %i \n\n", i, promedioCal[i][6]);
            //reinicio el valor de la suma para que a la siguiente
            //vuelta la suma empiece de nuevo en 0;
            suma=0;
        }
    
    
    
        return 0;
    }
    

<br>

[========]



## Cadena de caracteres (string)

Generalmente se dice que es un arreglo de caracteres cuando lo que se almacenó son caracteres y no existe el carácter nulo al final.

Cuando el arreglo de caracteres termina con el carácter nulo se llama cadena de caracteres.

Para recoger información del stdin del usuario podemos usar scanf(), gets() y fgets().

el problema de scanf() es que solo recoge información hasta que encuentra un espacio.

el problema de gets() es que si por ejemplo la información recogida tiene un tamaño 15 espacios en memoria y se guarda por ejemplo en un array de 5 espacios los 10 espacios restante los escribe en la memoria de igual manera y con esto podría reescribir una función importante del sistema haciendo colgar la computadora, para evitar eso se recomiendo usar:

gets en C, es la funcion que nos permite leer una cadena de caracteres incluyendo espacios

fgets() ya que en esta función se le pasa como parámetro la variable donde se va a guardar la información, de donde se va a recibir la información y lo que corrige el problema de la anterior función que es el tamaño máximo de la información que puede recibir, quedando así: fgets(varaible, 15, stdin); donde “variable” es la variable donde se va a guardar la información, 15 es el tamaño máximo de la información que puede recoger y stdin es de donde se va recoger la información en este caso stdin es el teclado


Codigo de la clase:

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
Reto

    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
    
        /*
        Programa que reciba una cadena de caracteres e imprima de
        regreso la misma cadena de forma invertida
        */
        printf("Invertir la frase.\n\n");
    
        char frase[50];
    
        printf("Ingresa una frase: \n\n");
    
        gets(frase);
    
        //recorre letra por letra la frase
        for(int i = 0; i < strlen(frase); i++)
        {
            //imprime la longitud de la frase empezando desde atras
            printf("%c", frase[(strlen(frase) - 1) - i]);
        }
    
        return 0;
    }
    
<br>

[========]

## Funciones: Divide y vencerás
Las funciones son bloques de código que realizan alguna operación. Pueden aceptar datos de entrada (parámetros) y devolver un dato de salida.

Se pueden utilizar para:

- Encapsulamiento
- Reusabilidad de código
- Separar tareas
- Cambios a futuro

Ejercicio de la clase

        #include <stdio.h>
        #include <stdlib.h>
        
        int Addition(int a, int b)
        {
            //devuelve el resultado de la suma de los dos enteros
            int res = a + b;
            
            //regresa el tipo de dato de la funcion
            return res;
        }
        
        int main()
        {
            printf("Funciones! \n");
        
            //este entero es igual a la funcion, entonces la llama.
            //como la funcion es un entero, lo igualo a otra funcion del mismo tipo de dato
            int additionRes = Addition(3,4);
        
            printf("Resultado es: %i", additionRes);
        
            return 0;
        }



Reto 1



```
#include <stdio.h>
#include <stdlib.h>

int potenciacion(int base, int exponente)
{
    int res = pow(base, exponente);

    return res;
}

int main()
{
    /*Vamos a calcular la potencia de un numero
    INGRESAR un valor base
    Ingrear un valor de exponente
    Dentro de una funcion calcular el exponente del numero base
    Imprimir resultado
    */
    printf("Reto de funciones! \n");

    int base, exponente;

    printf("Ingresa el valor de la base: ");
    scanf("%i", &base);

    printf("Ingresa el valor del exponente: ");
    scanf("%i", &exponente);

    //variable para almacenar la funcion
    int potencia = potenciacion ( base, exponente);

    printf("El resultado de la potencia es: %i \n", potencia);

    return 0;
}
```

Reto 2

Lo hice con sucres. Una moneda que desaparecion en Ecuador en el anio 2000 a raiz de que adopto el dolar como moneda


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
    
    
<br>

[========]



## Variables locales y globales

Las variables globales se declaran fuera de cualquier función y, según donde se declaren, varias funciones pueden tener acceso a ellas.

La única diferencia entre una variable local y una global es su ámbito de acción. 

- Variable local: es aquella que sólo es utilizable dentro del código de la función. 
- Variable global: es aquella cuyo ámbito es todo el programa, incluso dentro de una función


    #include <stdio.h>
    #include <stdlib.h>
    
    char textoPublico[] = {"Texto en una variable global.\n"};
    
    void comprobar()
    {
        printf("\n\n-- Imprimir desde la funcion: comprobar --\n\n");
    
        printf("Variable global: ");
        printf("%s", textoPublico);
    
        //Provoca error, no puede compilar porque no encuentra la variable: textoPrivado.
        //Hay que coomentar la linea para que el programa compile.
        printf("Variable local: ");
    //    puts(textoPrivado);
    }
    
    int main()
    {
        printf("Variables publicas y privadas.\n");
        printf("-- Imprimir desde la funcion: main --\n\n");
    
        char textoPrivado[] = {"Texto en una variable local.\n"};
    
        printf("Variable global: ");
        printf("%s", textoPublico);
    
        printf("Variable local: ");
        printf("%s", textoPrivado);
    
        comprobar();
    
        return 0;
    }
    


Reto 

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
    

<br>


[========]



## Recapitulación: Funciones

Las funciones son bloques de código que realizan alguna operación o instrucciones. Estas al igual que en matemáticas pueden aceptar datos de entrada, a estos les llamamos parámetros o argumentos y datos de salida.

¿Con qué finalidad hacemos estas secciones de código?

- Encapsulamiento
- Reusabilidad
- Separar Tareas
- Cambios a futuro

La sintaxis para escribir una función es la siguiente:

    tipo_de_datos nombre (parametros)
    {
    	bloque de instrucciones
    }

Primero se escribe el tipo de dato de la salida de datos, luego el nombre por el que se identificará la función y finalmente entre paréntesis los parámetros o entrada de datos.

El dato final necesita ser descrito con el comando** return** y el dato que vamos a regresar, que tiene que** ser el mismo tipo de dato **el cual indicamos inicialmente al crear la función

De no necesitar un dato de salida nuestra función puede ser de tipo void, esto quiere decir que no regresa ningún dato.



<br>


[========]


## RECURSIVIDAD

En C, las funciones pueden llamarse a sí mismas.
Si una expresión en el cuerpo de una función llama a la propia función, se dice que ésta es recursiva.
La recursividad es el proceso de definir algo en términos de sí mismo y a veces se llama definición circular.

    #include <stdio.h>
    #include <stdlib.h>
    
    int factorial (int n)
    {
        printf("Entra a la funcion factorial, n vale: %i \n", n);
    
        if (n > 1)
        {
            printf("La funcion se llamara a si misma otra vez \n");
            return n * factorial (n-1);
        }
        else{
            printf("N es igual a 1. Termina la recursividad");
    
            return 1;
        }
    }
    
    
    int main()
    {
        printf("Recursividad \n");
    
        int result = factorial (5) ;
    
        printf ("\n EL resultado es: %i", result);
    
        return 0;
    }
    









<br>


[========]


## APUNTADORES

Un apuntador es una variable que guarda la dirección de memoria de otra variable.

Las direcciones de memoria se suelen describir como números en hexadecimal. Un apuntador es una variable cuyo valor es la dirección de memoria de otra variable. Se dice que un apuntador “apunta” a la variable cuyo valor se almacena a partir de la dirección de memoria que contiene el apuntador.

El operador de dirección (&) regresa la dirección de una variable.
El operador de indirección (*) toma la dirección de una variable y regresa el dato que contiene esa dirección.


    int *p;
    /*
    estamos diciendo: compu dame un espacio en memoria en donde puedo almacenar una direccion de alguna variable de tipo integer
     */
    
    int a = 5;
    /*
    Aqui decimos: compu crea un espacio en la memoria del tamaño de un integer y almacena el valor 5 en el
    */ 
    
    p = a;
    /*
    Aqui decimos: compu haz que la direccion donde esta la variable llamada a se almacene en mi variable puntero p
    */
    
    *p = 10;
    /*
    Aqui lo que decimos es: compu cambia el valor que se encuentra en la direccion que aparece en p y cambialo por el valor 10
    */
    
    printf( "%i", &a );
    /*
    Aqui lo que decimos es: compu imprime en pantalla la direccion en memoria de mi variable llamada a */


<br>


[========]

## STRUT Y MANEJO DE ARCHIVOS

### **Creación y apertura de archivos**

Parámetros para la función fopen():

““rb””: Abre un archivo en modo binario para lectura, el fichero debe existir.
““w””: Abrir un archivo en modo binario para escritura, se crea si no existe o se sobreescribe si existe.

Los struts permiten guardar varios elementos con diferentes tipos de datos a diferencia de los arrays que solo pueden guardar un solo tipo de datos

    #include <stdio.h>
    #include <stdlib.h>
    
    struct personalData
    {
        char name [20];
        char lastName [20];
        int age;
    };
    
    
    int main()
    {
        printf("Estructura de datos! \n");
    
        struct personalData person;
    
        printf("Leer datos: \n");
    
        printf("Ingresar nombre: \n");
    
        gets (person.name);
    
        printf("Ingresar apellido: \n");
    
        gets (person.lastName);
    
        printf("Ingresar edad: \n");
    
        scanf("%i", &person.age);
    
        printf("Imprimir datos: \n");
    
        printf(" %s \n", person.name);
        printf(" %s \n", person.lastName);
        printf(" %i \n", person.age);
    
    
        return 0;
    }
    


### Crear un archivo

    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        printf("Archivos! Crear un archivo! \n");
    
    
        FILE *archivo;
    
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
    
	
	
	

### ESCRITURA Y LECTURA DE ARCHIVOS

Escritura cuenta con cuatro parametros:

**fwrite (void *apuntador, size_t tamano, size_t cantidad, FILE archivo);**

- void*apuntador: Apuntador con la direcion de la informacion que estamos guardando

- size_t tamano: tamano de cada elemento que sera escrito

- size_t cantidad: numero de elementos

- FILE archivo: Apuntador con la direccion al archivo donde estamos guardando/escribiendo

**fread (void *apuntador, size_t tamano, size_t cantidad, FILE archivo);**

- void*apuntador: Apuntador con la direcion de la informacion que estamos leyendo

- size_t tamano: tamano de cada elemento que sera leido

- size_t cantidad: numero de elementos

- FILE archivo: Apuntador con la direccion al archivo donde estamos leyendo

<br>


[========]

## MANEJO DE LIBRERIAS

Una libreria es codigo de programacion ya escrito. Un conjunto de funciones independientes para solucionar un problema.


