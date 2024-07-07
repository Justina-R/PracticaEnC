#include <stdio.h>
#include <stdlib.h>

/*Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5. */

void main()
{
    int i, acumulador;
    int matriz[5];
    acumulador = 0;
    for(i = 0; i < 5; i++) {
        printf("Ingrese un número entero %d:", i+1);
        scanf("%d", &matriz[i]);
        if(matriz[i] == 5) {
            acumulador = acumulador +1;
        }
    }
    printf("El número 5 se repite: %d veces.\n", acumulador);
}