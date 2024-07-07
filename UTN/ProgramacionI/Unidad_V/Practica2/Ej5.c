// ejercicio 5
#include <stdlib.h>
#include <stdio.h>
/* Crear una función llamada “signo”, que reciba un número real, y devuelva un número
entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.*/

int signo(float num);

int main()
{
    float num;

    printf("Ingrese un numero real:\n");
    scanf("%f", &num);

    if (signo(num) == -1){
        printf("El numero es negativo.\n");
    } else if(signo(num) == 1){
        printf("El numero es positivo.\n");
    } else {
        printf("El numero ingresado es 0.\n");
    }

    return 0;
}

int signo(float num)
{
    if (num < 0){
        return -1;
    } else if(num == 0){
        return 0;
    } else{
        return 1;
    }
}