#include <stdio.h>
#include <stdlib.h>

/*Escribir un algoritmo que permita ingresar 10 valores numéricos en un arreglo y que como resultado devuelva el mayor de todos
los valores ingresados.*/

void main()
{
    int i, mayor_numero;
    int matriz[10];
    for (i = 0; i < 10; i++) {
        printf("Ingrese un numero %d: \n", i+1);
        scanf("%d", &matriz[i]);
        if (i == 0) {
            mayor_numero = matriz[i];
        } else if (matriz[i] > mayor_numero){
            mayor_numero = matriz[i];
        }
    }
    printf("El mayor número es: %d\n", mayor_numero);
}