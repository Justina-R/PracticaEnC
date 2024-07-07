#include <stdio.h>
#include <stdlib.h>

/*Desarrollar un algoritmo que permita ingresar 5 datos numéricos en un arreglo y que luego los sume a todos y muestre el resultado
en pantalla.*/

void main()
{
    int i, suma;
    int matriz[5];
    suma = 0;
    for (i = 0; i < 5; i++) {
        printf("Ingrese un numero %d: \n", i+1);
        scanf("%d", &matriz[i]);
        suma = matriz[i] + suma;
    }
    printf("La suma es: %d\n", suma);
}