#include <stdio.h>
#include <stdlib.h>

/*Escribir un algoritmo que permita al usuario ingresar 5 números y luego imprimirlos en pantalla.*/

void main()
{
    int i;
    int matriz[5];
    for (i = 0; i < 5; i++) {
        printf("Ingrese un número: %d \n", i);
        scanf("%d", &matriz[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("%d\t", matriz[i]);
    }
}