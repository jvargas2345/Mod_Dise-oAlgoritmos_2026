//CIRCULO.C TRABAJA CON LA CONSTANTE DE PI

#include<stdio.h>

#define pi 3,14159265358979//Constante simbolica: el procesador cambia PI por el numero

int main(){
    //Constante de cadena: No puede cambiar durante el programa 
    const char UNIDAD[] = "cm";

    //Variables reales para el radio y los resultados
    double radio, area, perimetro;


    //ENTRADA: LEE EL RADIO  -> RADIO = 4

    printf("Radio del circulo (CM:  ");
    scanf ("%lf", &radio);



    //PROCESO: En c no existe ^; radio al cuadrado = radio * radio -> 50.27
    area = pi * radio * radio;

    //Perimetro = 2 * PI * radio -> 23.13
    perimetro = 2 * pi * radio;


    //SALIDA: %.2f MUESTRA  2 DECIMALES Y %s MUESTRA LA CADENA UNIDAD

    printf("Area: %.2f %s2\n", perimetro, UNIDAD);
    printf("Perimetro: %.2f %s\n", perimetro, UNIDAD);

    return 0;


};
