//Tablas.c resuelve la tabla del 7 para varios numeros.

#include <stdio.h>

#define CENTINELA 0//el 0 indica que no hay tablas

    int main (void){
        //Declaracion de variables
        int numero, i;
        int tablas = 0;

        //LECTURA PREVIA: El primer numero se lee antes del while -> 7
        printf ("%d", &numero);

        while (numero != CENTINELA){
            /* FOR ANIDADO : 100 VUELTAS POR CADA NUMERO --> 1 = 1, 2, .......10 */
            for ( i = 1; i <= 10; i++){
                printf("%d x %2\n = %2d\n", numero, i, numero *i);

            }

            tablas++;//cuenta la tabla mostrada -->  1 luego 2
            //Siguiente dato al final del cuero -> 3, luego 0
            printf("numero de la tabla (0 para terminar): ");
            scanf("%d", &numero);

        }
        //DESPUES DEL WHILE (SE DIGITA 0 ) --> TABLAS MOSTRADAS 2
        printf("Tablas mostradas:  %d\n", tablas);
        return 0;//terminar sin errores
        


    };

