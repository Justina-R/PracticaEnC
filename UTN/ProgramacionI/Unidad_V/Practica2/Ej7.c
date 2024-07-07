// ejercicio 7
#include <stdlib.h>
#include <stdio.h>

/*Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
número primo o 0 en caso contrario*/

int esPrimo(int num);

int main()
{
    int num;

    printf("Ingrese un numero:\n");
    scanf("%d", &num);

    if (esPrimo(num) == 1) {
        printf("El numero ingresado es primo.\n");
    } else {
        printf("El numero ingresado NO es primo.\n");
    }

    return 0;
}

int esPrimo(int num)
{
    if (num % 2 == 1 && num % 3 != 0){
        return 1;
    }
    return 0;
}