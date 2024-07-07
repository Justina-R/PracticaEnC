#include <stdio.h>

/* 
Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que NO están en la diagonal principal

*/
int main()
{
    int matriz_cuadrada[3][3];
    int suma = 0;

// 1
    matriz_cuadrada[0][0] = 1;
    matriz_cuadrada[0][1] = 2;
    matriz_cuadrada[0][2] = 3;
// 2               [i][j]
    matriz_cuadrada[1][0] = 8;
    matriz_cuadrada[1][1] = 9;
    matriz_cuadrada[1][2] = 1;
// 3
    matriz_cuadrada[2][0] = 4;
    matriz_cuadrada[2][1] = 5;
    matriz_cuadrada[2][2] = 6;

    for (int i = 0; i < 3; i++)
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

    printf("La suma de todos los elementos de la matriz que NO son de la diag Principal: %d\n", suma);

    return 0;
}