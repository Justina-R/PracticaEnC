#include <stdio.h>
#include <stdlib.h>

/*Escriba un algoritmo donde se le pida al usuario que ingrese una matriz cuadrada de dimensión 2 y calcular el determinante de la
matriz*/

int main()
{
    int matriz_cuadrada[2][2], i, j;
    float determinante;

    for (i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Ingrese el valor del elemento [%d, %d]:\n", i, j);
            scanf("%d", &matriz_cuadrada[i][j]);

        }
    }

    determinante = matriz_cuadrada[0][0]*matriz_cuadrada[1][1] - matriz_cuadrada[0][1]*matriz_cuadrada[1][0];

    printf("\nMatriz cuadrada ingresada:\n");
    for (i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matriz_cuadrada[i][j]);
        }
        printf("\n");
    }

    printf("\nLa determinante de la matriz ingresada es igual a %.2f.\n", determinante);

    return 0;
}