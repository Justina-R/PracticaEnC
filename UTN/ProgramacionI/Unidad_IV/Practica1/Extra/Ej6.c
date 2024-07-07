#include <stdio.h>
#include <stdlib.h>

/*Escriba un algoritmo donde se le pida al usuario que ingrese una matriz cuadrada de dimensión 3. Luego mostrar los elementos de
la diagonal principal.*/

int main()
{
    int matriz_cuadrada[3][3], i, j;
    int suma = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Ingrese el valor del elemento [%d, %d]:\n", i, j);
            scanf("%d", &matriz_cuadrada[i][j]);

        }
    }

    printf("\nMatriz cuadrada ingresada:\n");
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz_cuadrada[i][j]);

            if (i != j)
            {
                suma += matriz_cuadrada[i][j];
            }
        }
        printf("\n");
    }

    printf("\nLa suma de todos los elementos de la matriz que NO son de la diag Principal: %d\n", suma);

    return 0;
}