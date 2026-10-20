//Inicializamos las librerias
#include <stdio.h>

void imprimirMensaje(){
printf("Hola, este es un programa estructurado en C\n");

}

int sumar(int a, int b){
    return a+b;

}

int main(){
    int x=5, y=10;

    int resultado;

//Aqui se llama a la funcion para imprimir sin la necesidad de un printf
    imprimirMensaje();
    resultado = sumar(x,y);
    printf("La suma es: %d y %d\n", x, y, resultado);
    return 0;

}