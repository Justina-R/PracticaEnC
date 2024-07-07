#include <stdio.h>
#include <stdlib.h>

/*Realice un algoritmo que lea N elementos y que imprima el número que se repite más veces dentro del arreglo.*/

int main()
{
    int cant_elementos, cant_repeticiones, mayor_cant_repeticiones = 0, num_mas_repetido, i;

    printf("Cuantos elementos desea ingresar?\n");
    scanf("%d", &cant_elementos);

    int elementos[cant_elementos];

    for (i = 0; i < cant_elementos; i++)
    {
        printf("Ingrese el elemento %d:\n", i + 1);
        scanf("%d", &elementos[i]);
    }

    for (i = 0; i < cant_elementos; i++)
    {
        cant_repeticiones = 0;
        for (int j = 0; j < cant_elementos; j++)
        {
            if (elementos[i] == elementos[j])
            {
                cant_repeticiones++;
            }
        }
        if (mayor_cant_repeticiones < cant_repeticiones)
        {
            mayor_cant_repeticiones = cant_repeticiones;
            num_mas_repetido = elementos[i];
        }
    }

    if (mayor_cant_repeticiones == 1)
    {
        printf("No hay un numero que se repita mas veces que el resto.\n");
    }
    else
    {
        printf("El elemento mas repetido del arreglo es %d.\n", num_mas_repetido);
    }

    return 0;
}