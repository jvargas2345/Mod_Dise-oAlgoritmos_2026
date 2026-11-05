#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#define TOTAL_PRODUCTOS 4
/*Prototipos de funciones */
int leerEntero(const char mensaje[], int minimo, int maximo);
void listar(const char nombres[][30], const double precios[],
const int existencias[], int total);
int vender(int existencia, int cantidad);
void reponer(int existencia, int cantidad);
double valorInventario(const double precios[],
const int existencias[], int total);
int main(void)
{

 /*Arreglos paralelos */
const char nombres[TOTAL_PRODUCTOS][30] = {
"Arroz 2 kg",
"Frijoles 1 kg",
"Cafe 1 kg",
"Aceite 1 L"
};
const double precios[TOTAL_PRODUCTOS] = {
2400.00, 1800.00, 4500.00, 3200.00
};
int existencias[TOTAL_PRODUCTOS] = {20, 15, 12, 8};
int opcion;
int producto;
int cantidad;
int resultado;
do {
printf("
Listar 2. Vender 3. Reponer "
Valor 0. Salir
");
opcion = leerEntero("Opcion (0 a 4): ", 0, 4);
switch (opcion) {
case 1:
listar(nombres, precios, existencias,
TOTAL_PRODUCTOS);
break;
case 2:
producto = leerEntero(
"Producto (1 a 4): ", 1, TOTAL_PRODUCTOS);
cantidad = leerEntero(
"Cantidad (1 a 50): ", 1, 50);
resultado = vender(
&existencias[producto - 1], cantidad);
if (resultado == 1) {
printf("Vendido: %d x %s = %.2f
",
cantidad, nombres[producto - 1],
precios[producto - 1] * cantidad);
} else {
printf("Solo hay %d unidades.
",
existencias[producto - 1]);
}
break;
case 3:
producto = leerEntero(
"Producto (1 a 4): ", 1, TOTAL_PRODUCTOS);
cantidad = leerEntero(
"Cantidad (1 a 50): ", 1, 50);
reponer(&existencias[producto - 1], cantidad);
printf("Existencias de %s: %d
",
nombres[producto - 1],
existencias[producto - 1]);
break;
case 4:
printf("Valor del inventario: %.2f
",
valorInventario(precios, existencias,
TOTAL_PRODUCTOS));
break;
case 0:
printf("Hasta luego.
");
break;
}
} while (opcion != 0);
return 0;
}
/* Lee un entero y valida que este dentro del rango /
int leerEntero(const char mensaje[], int minimo, int maximo)
{
char entrada[100];
char fin;
long numero;
for (;;) {
printf("%s", mensaje);
if (fgets(entrada, sizeof entrada, stdin) == NULL) {
printf("
Fin de entrada.
");
exit(EXIT_SUCCESS);
}
if (strchr(entrada, '
') == NULL) {
int caracter;
while ((caracter = getchar()) != '
' &&
caracter != EOF) {
/* Descarta el resto de la entrada /
}
printf("Entrada demasiado larga.
");
continue;
}
errno = 0;
numero = strtol(entrada, &fin, 10);
while (fin == ' ' || fin == '\t' ||
fin == '\r' || fin == '
') {
fin++;
}
if (fin == entrada || fin != '\0' ||
errno == ERANGE || numero < INT_MIN ||
numero > INT_MAX) {
printf("Ingrese un numero entero valido.
");
continue;
}
if (numero < minimo || numero > maximo) {
printf("El valor debe estar entre %d y %d.
",
minimo, maximo);
continue;
}
return (int) numero;
}
}
/* Muestra numero, nombre, precio y existencias */
void listar(const char nombres[][30], const double precios[],
const int existencias[], int total)
{
int i;
printf("
%-4s %-20s %12s %12s
",
"N.", "Producto", "Precio", "Existencias");
for (i = 0; i < total; i++) {
printf("%-4d %-20s %12.2f %12d
",
i + 1, nombres[i], precios[i], existencias[i]);
}
}
/* Vende si hay suficientes existencias */
int vender(int existencia, int cantidad)
{
if (cantidad <= existencia) {
existencia -= cantidad;
return 1;
}
return 0;
}
/* Aumenta las existencias mediante un puntero /
void reponer(int existencia, int cantidad)
{
existencia += cantidad;
}
/* Calcula el valor total de todo el inventario /
double valorInventario(const double precios[],
const int existencias[], int total)
{
int i;
double valor = 0.0;
for (i = 0; i < total; i++) {
valor += precios[i] * existencias[i];
}
return valor;
}
