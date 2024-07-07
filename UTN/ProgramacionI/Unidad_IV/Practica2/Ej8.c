#include <stdio.h>
#include <stdlib.h>

/*Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array.*/

int main()
{
    int array_uno[5];
    int array_dos[5];
    int array_resultado[10];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese 5 numeros enteros (ARRAY UNO): \n");
        scanf("%d", &array_uno[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese otros 5 numeros enteros (ARRAY DOS): \n");
        scanf("%d", &array_dos[i]);
    }

    for (i = 0; i < 5; i++)
    {
        array_resultado[i] = array_uno[i];
        array_resultado[i + 5] = array_dos[i];
    }

    printf("Los numeros ingresados son: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", array_resultado[i]);
    }

    return 0;
}