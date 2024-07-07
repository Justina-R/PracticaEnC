#include <stdio.h>
#include <stdlib.h>

/*Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.*/

void main()
{
    int i;
    int matriz[5] = { 10, 20, 30, 40, 50 };

    printf("Orden ascendente:\n");

    for(i = 0; i < 5; i++) {
        // i  ----  valor
        printf("ÍNDICE: %d -> VALOR: %d\n", i, matriz[i]);
    }

    printf("Orden descendente:\n");

    for(i = 4; i >= 0; i--) {
        // i  ----  valor
        printf("ÍNDICE: %d -> VALOR: %d\n", i, matriz[i]);
    }
}