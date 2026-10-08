//AREA C- SACA EL AREA DE UN RECTANGULO

#include<stdio.h>

int main(){
    //DECLARAMOS PRIMERO VARIABLES
    double base, altura, area;
    

    //Entrada de datos lee la base = 5
    printf(" Digite la base del  rectangulo: (cm):  ");
    scanf("%lf", &base);


    //MUESTRA EL MENSAJE Y LEE ALTURA
    printf(" Digite la altura del rectangulo: (cm) ");
    scanf("%lf", &altura);

    //PROCESO: MULTIPLICARA Y GUARDA EL RESULTADO

    area= base * altura;

    //SALIDA: MUESTRA EL AREA CON DOS DECIMALES

    printf("El area de el rectangulo es: %.2f cm2\n", area);
    return 0;



};