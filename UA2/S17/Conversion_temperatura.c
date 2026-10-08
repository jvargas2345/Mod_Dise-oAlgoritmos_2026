//Inicializamos la libreria 
#include <stdio.h>

//Inicializar 
double grados_celsius;
double fahrenheit;


//Entrada de datos
float grados(void){
    printf("Temperatura en grados Celsius: ");
    scanf("%lf",grados_celsius);

    //Proceso
    fahrenheit=grados_celsius*9/5+32;

    //SALIDA
    printf("Los grados ingresados equivalen a ",fahrenheit, "°F");
    return 0;
};