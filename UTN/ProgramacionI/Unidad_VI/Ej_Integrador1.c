/*Ejercicio Intergador 1 / Unidad 6

Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa que permita al empleado
completar la cantidad vendida de cada producto en el día. Al iniciar el programa los datos de los productos se encuentran cargados.
Por cada producto se deberá ingresar la cantidad del producto vendida. Luego se calculará el monto final de ventas del día.
Al monto de cada producto se lo multiplica por la cantidad vendida y se adiciona el IVA del 21 %.
Al finalizar se debe mostrar el monto total neto vendido y el total de IVA del día. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void cargarMatriz(char matriz[4][4][30]);
void cargarCantidad(char matriz[4][4][30]);
void mostrarMatriz(char matriz[4][4][30]);
float totalVentas(char matriz[4][4][30]);
float calcularIVA(float totalNeto);

float iva = 0.21;

int main()
{
    char productos[4][4][30];
    float totalVentasNeto, totalVentasConIVA;

    cargarMatriz(productos);

    cargarCantidad(productos);

    mostrarMatriz(productos);

    totalVentasNeto = totalVentas(productos);

    totalVentasConIVA = calcularIVA(totalVentasNeto);

    printf("\nAcumulado sin IVA: $%.2f\n", totalVentasNeto);

    printf("Acumulado con IVA: $%.2f\n", totalVentasConIVA);

    return 0;
}

float calcularIVA(float totalNeto)
{
    float montoConIVA;
    montoConIVA = totalNeto + (totalNeto * iva);
    return montoConIVA;
}

void cargarMatriz(char matriz[4][4][30])
{
    strcpy(matriz[0][0], "01");
    strcpy(matriz[0][1], "3500.00");
    strcpy(matriz[0][2], "Mantel 2x2      ");

    strcpy(matriz[1][0], "02");
    strcpy(matriz[1][1], "800.99");
    strcpy(matriz[1][2], "Plato playo 24cm");

    strcpy(matriz[2][0], "03");
    strcpy(matriz[2][1], "1450.50");
    strcpy(matriz[2][2], "Copa vino       ");

    strcpy(matriz[3][0], "04");
    strcpy(matriz[3][1], "650.50");
    strcpy(matriz[3][2], "Plato hondo 22cm");
}

void cargarCantidad(char matriz[4][4][30])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Ingrese la cantidad vendida del producto: %s\n", matriz[i][2]);
        scanf("%s", &matriz[i][3]);
    }
}

void mostrarMatriz(char matriz[4][4][30])
{
    for (int i = 0; i < 4 ; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%s\t", matriz[i][j]);
        }
        printf("\n");
    }
}

float totalVentas(char matriz[4][4][30]){
    float total, precio;
    int cantidad;

    total = 0;

    for (int i = 0; i < 4; i++)
    {
        precio = atof(matriz[i][1]);
        cantidad = atof(matriz[i][3]);
        total += precio*cantidad;
    }
    return total;
}