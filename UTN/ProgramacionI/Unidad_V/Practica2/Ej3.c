// ejercicio 3
#include <stdlib.h>
#include <stdio.h>
/*Crea una función llamada esPar que reciba un número entero como parámetro y
devuelva 1 si el número es par o 0 si es impar. Después, crea un programa que utilice
esta función y muestre los mensajes en consola “El número ingresado es par” o “El
número ingresado es impar” dependiendo del valor retornado por la función.*/

int esPar(int num);

int main()
{
    int num;

    printf("Ingrese un numero entero:\n");
    scanf("%d", &num);

    if (esPar(num) == 1)
    {
        printf("El numero ingresado es par.\n");
    } else {
        printf("El numero ingresado es impar.\n");
    }

    return 0;
}

int esPar(int num)
{
    if(num % 2 == 0)
    {
        return 1;
    } else {
        return 0;
    }
}