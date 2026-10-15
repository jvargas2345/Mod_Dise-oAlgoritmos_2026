//Ventas.c Ventas de una cadena de sodas con sucursal y por dia
//Que lograr: Guardar en una matriz las ventas de 3 sucursales en 4 dias.
//Sumar cada sucursal (fila) y cada dia por medio de la (columna), e identificar 
//la sucursal que mas vendio con su nombre guardado en una cadena.
//RESULTADO ESPERADO: Centro 470, Norte 350, Sur 410, por dia 330 270 330; Sucursal con mas ventas: Centro (470).


#include <stdio.h>
#include <string.h>
#include <stdlib.h> //strcpy
#define SUC 3 // Filas sucursal
#define DIAS 4 //Columnas sucursales


int main( void){
    //Arreglo de cadenas: Una fila por nombre (hasta 9 letras + '\0')
    char nombres[SUC][10]={"Centro", "Norte", "Sur"};

    //Ventas en miles de colones
    int ventas[SUC][DIAS]={{120, 100,130, 120},
    {90, 80 ,100 , 80},
    {120,90,100,100}};

    char mejor [10]; //Nombre de la sucursal ganadora
    int s, d, total, totalDia, mayor=0;

    //Encabezado
    printf("-8s", "");
    for(d=0; d< DIAS; d++){
        printf("D%d",d+1);

    }
    printf(" | Total\n ");

    //RECORRIDO POR FILAS
    for ( s = 0; s < SUC; s++){
        total = 0;//REINICIA CADA FILA
        printf("%-8s", nombres[s]);//Nombre a la izquierda
        for ( d = 0; d < DIAS; d++)
        {
            printf("%5d", ventas[s][d]);
            total += ventas[s] [d];

        }
        printf(" | %5d/n", total); //470, 3750, 410

        //Guardar la variable con mayor total;strcpy copia el nombre
        if (total>mayor ){
            mayor=total;
            strcpy(mejor, nombres[s]);//Mejor = centro
        }
        
        
    }
    //Recorrido por columnas. El for externo recorre los dias 
    printf("%-8s", "Dia");
    for ( d = 0; d < DIAS; d++){
        totalDia=0;
        for ( s = 0; s < SUC; s++){
            totalDia += ventas[s] [d];

        }
        printf("%5d", totalDia); //330 270 330 300
        
    }
    printf("\n");
    //SALIDAS: SUCURSAL CON MAS 
    printf("Sucursal con mas ventas: %s(%d)\n", mejor, mayor);
    system("Pause");
    return 0;
    

}
