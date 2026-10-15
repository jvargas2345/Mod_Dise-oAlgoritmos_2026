//Caja.c - Caja registradora con menu
#include<stdio.h>

int main(void){
    //Declaracion de variables
    int opcion;  //Opcion elegida en el menu
    int producto = 0; //Contador  de productos de la venta
    double precio; // precio para cada producto
    double total= 0; //ACUMULADOR DE LA VENTA


    //DO .... WHILE: EL MENU SE MUESTRA  AL MENOS UNA VEZ 

    do {
        //Mostrar el menu y lee la opcion  -> 1
        printf("\n1. Agregar 2. Ver total 3. Cobrar 0. Salir");

        printf("Opcion: ");
        scanf("%d", &opcion);

        //SWITCH : (Segun): Salta al case que coincida con la opcion elegida
        switch (opcion){

        case 1: 
        //VALIDACION: REPITE MIENTRAS EL PRECIO NO SEA POSITIVO
        do{
            printf("Precio del producto: ");
            scanf("%1f", &precio);// --> 1500(-200)
            if (precio <= 0){
                printf("Precio invalido \n");
            }
        } while (precio<=0);
        producto++;  //Cuenta productos
        total += precio; //Suma el precio
        break; //Sale del switch
        
        case 2:
        //Muestra el avance
        printf("Productos: %d Total: %.2f\n", producto, total);
        break;

        case 3:
        //COBRA Y REINICIA EL CONTADOR Y ACUMULADOR
        printf("Cobrado: %.2f. NUEVA VENTANA \n", total);
        producto=0;
        total=0;
        break;

        break;
        case 0:
        printf("Caja cerrada\n");
        break;
        default:
        //NINGUN CASE COINCIDE -> 9
        printf("Opcion invalida \n");

        }
        //REPITA EL MENU MIENTRAS NO SE ELIJA 0
    }while (opcion != 0);
    return 0;
    
    }
    