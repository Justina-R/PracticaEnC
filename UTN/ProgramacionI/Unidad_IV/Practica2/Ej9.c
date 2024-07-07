/* 
Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array.
*/

#include <stdio.h>
int main()
{
    int array_uno[5];
    int array_resultado[5];

    printf("Ingrese los 5 numeros del Array: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array_uno[i]);
        array_resultado[i] = array_uno[i] * 2;
    }

    printf("El resultado del array es: \n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", array_resultado[i]);
    }

    return 0;
}