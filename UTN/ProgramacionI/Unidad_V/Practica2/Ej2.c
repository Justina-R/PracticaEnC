#include <stdlib.h>
#include <stdio.h>
/* 
Crea una función llamada calcularAreaCuadrado que reciba el lado de un cuadrado
como parámetro y devuelva el área de ese cuadrado. Luego, desarrolla un programa
que invoque a esta función y muestre el resultado.
*/
float areaCuadrado(float lado);
int main()
{
    float lado, resultado;
    printf("Ingrese el lado del cuadrado: \n");
    scanf("%f", &lado);
    resultado = areaCuadrado(lado);
    printf("El área del cuadrado es: %.2f\n", resultado);
    return 0;
}
float areaCuadrado(float lado)
{
    return lado * lado;
}