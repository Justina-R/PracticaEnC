#include <stdio.h>
#include <stdlib.h>

/*Escribir un algoritmo que cree un arreglo de dimensión 7, asignarle un valor numérico cualquiera a cada posición y escribirlos en
pantalla.*/

void main()
{
    int i;
    int matriz[7] = {23, 12, 21, 13, 52, 72, 92};
    for (i = 0; i < 7; i++) {
        printf("%d", matriz[i]);
    }
}