/*Ejercicio Intergador 2 / Unidad 6

Un empleado de un comercio debe informar al final del día el monto de descuento realizado dependiendo de cada medio de pago. Para ello,
realizar un programa que permita al empleado completar los montos totales de venta realizados por cada medio de pago. Al iniciar el programa
los datos de los medios de pago se encuentran cargados (ver TABLA). Por cada medio de pago se deberá ingresar el monto total vendido en el día.
Luego se calculará el descuento realizado por cada medio de pago. Al finalizar se debe mostrar además el monto total de descuentos 
realizado por todos los medios de pago en el día. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void cargarMatriz(char matriz[3][3][20]);
void cargarMontoTotal(char matriz[3][3][20]);
void mostrarMatriz(char matriz[3][3][20]);
float descuentoPorMedioDePago(char matriz[3][3][20]);

int main()
{
    char mediosDePago[3][3][20];
    float dtoTotal;

    cargarMatriz(mediosDePago);

    cargarMontoTotal(mediosDePago);

    mostrarMatriz(mediosDePago);
    
    dtoTotal = descuentoPorMedioDePago(mediosDePago);

    printf("El descuento total de todos los medios de pago es de $%.2f.", dtoTotal);
    
    return 0;
}

void cargarMatriz(char matriz[3][3][20])
{
    strcpy(matriz[0][0], "Efectivo");
    strcpy(matriz[0][1], "0.15");

    strcpy(matriz[1][0], "Debito  ");
    strcpy(matriz[1][1], "0.10");

    strcpy(matriz[2][0], "Credito ");
    strcpy(matriz[2][1], "0.00");
}

void cargarMontoTotal(char matriz[3][3][20])
{
    for(int i = 0; i < 3; i++){
        printf("Ingrese el monto total vendido por %s:\n", matriz[i][0]);
        scanf("%s", &matriz[i][2]);
    }
    printf("\n");
}

void mostrarMatriz(char matriz[3][3][20])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%s\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

float descuentoPorMedioDePago(char matriz[3][3][20])
{
    float descuento, dtoTotal;

    dtoTotal = 0;

    for (int i = 0; i < 3; i++)
    {
        descuento = atof(matriz[i][2])*atof(matriz[i][1]);
        printf("El descuento para %s es de $%.2f.\n", matriz[i][0], descuento);
        dtoTotal += descuento;
    }
    printf("\n");

    return dtoTotal;
}