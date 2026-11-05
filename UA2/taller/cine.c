/*Un cine registra las compras de una funcion de (1 a 10). De cada compra se digita el nombre del cliente (Una palabra), el tipo de entrada (1.General 3500 2. niño2 500 3. Adulto mayor 2000 ) y la cantidad de entradas (1 a 8 ). Un dato invalido se vuelve a pedir. Si se compran 5 o mas entradas tienen descuento de 10%. Mostrar:Una tabla con cliente, las entradas y el total de cada compra, total vendido, compara mayor y cuantos descuentos tuvieron. */

#include <stdio.h>
#define MAX_COMPRAS 10
#define PRECIO_GENERAL 3500
#define PRECIO_NINO 2500
#define PRECIO_MAYOR 2000
#define MIN_DESCUENTO 5
#define TASA_DESCUENTO 0.10

//PROTOTIPO DE FUNCIONES
int leerEntero(const chart mensaje[], int minimo, int maximo);
double precioEntrada(int tipo);
double calcularTotal (int tipo, int cantidad);
void resumir(const int cantidad[], const double tot[], int n ,double *total, int *postMayor, int *conDescuento);

int main(void){
    //DEFINIR ARREGLOS Y VARIABLES 
    char clientes[MAX_COMPRAS][15];// NOMBRES DE LOS CLIENTES DE LA COMPRA
    int cantidades[MAX_COMPRAS];//CANTIDAD DE COMPRAS POSIBLES 10
    double totales [MAX_COMPRAS]; //TOTAL DE CADA COMPRA
    //Cantidad de compras, indice y el tipo de entrada 
    int n, i, tipo;
    //CANTIDAD DE COMPRAS
    double totalVendidos;
    //RESULTADOS
    int posMayor, conDescuento;

    //PORTADA  DE SALIDA
    printf("=====VENTA DE ENTRADAS======\n");
    printf("Tipos: 1. General, 3500 2.Niños 2500, 3.Adultos Mayores 2000");

    //LEER CANTIDAD DE COMPRAS --> 4
    n = leerEntero ("cantidad de compras", 1, MAX_COMPRAS);
    //FOR para una vuelta por compra
    for (i = 0; i < n; i++){
        printf("Numero de compras %d\n Cliente: ", i +1);//Numero de compra y pedido del cliente
        scanf("%14s", clientes[i]);

        //leer el tipo de entrada
        tipo= leerEntero("Tipo", 1, 3);

        //Leer tipo de entrada 
        cantidades[i] =leerEntero("Entradas", 1, 8); //Valida sin usar un do-while

        //Calcular el total de la compra
        totales[i] = calcularTotal(tipom cantidades[i]);
    }
    //Calcular el resumen en una pasada
    resumir(cantidades, total, n, & totalVendidos, & posMayor, & conDescuento);

    //Calcular el resumen en una pasada
    resumir(cantidades[i], totales[i], clientes[i]);

    //Recorrer las compras
    for (i = 0; i < n; i++){
        /*Mostrar fila  */
        printf("Total vendido: %12,2f/n", totalVendidos);
        //Compras mayor
        printf("Compra mayor: %d()");
    }

    //Definiciones. Leer enetero
    int leerEntero(const char mensaje[], int minimo, int maximo){
        //Variable local para el dato
        int valor;
        do{
            printf("%s(%d a %d):", mensaje);
            while (valor< minimo || valor > ){
                
            }
            
        }

    };

    //DEFINICION DE CALCULAR TOTAL
    double calcularTotal(int tipo, int cantidad){
        double total = precioEntrada(tipo) * cantidad;

        if (cantidades >= MIN_DESCUENTO){
            total= total * (1 - TASA_DESCUENTO);
            return total;
        }
        
    }

    //Definir resumir
    void resumir (const int[], const double tot[], int n, double * totales, int*posMayor, int)
    
    



}