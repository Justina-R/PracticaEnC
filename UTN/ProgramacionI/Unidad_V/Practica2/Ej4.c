#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/* 
Crear una función que calcule el cubo de un número real (float).
El resultado deberá ser otro número real.
*/
float alCubo(float numero);
int main()
{
    float num, cubo;
    printf("Ingrese un numero: \n");
    scanf("%f", &num);
    cubo = alCubo(num);
    printf("El cubo del numero ingresado es %.2f.\n", cubo);
    return 0;
}
float alCubo(float numero)
{
    return pow(numero, 3);
}