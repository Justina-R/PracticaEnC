/* Ejercicio 1 / Práctica en Pseudocódigo

Realizar un programa que llame a un subproceso que pida al usuario ingresar el nombre, el
apellido y la edad de una persona, luego llamar a otro subproceso que muestre por pantalla
los datos de la persona.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void pedirDatos();

int main()
{
    pedirDatos();

    return 0;
}

void pedirDatos() {
    char nombre[50];
    char apellido[50];
    int edad;

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su apellido: ");
    scanf("%s", apellido);
    printf("Ingrese su edad: ");
    scanf("%i", &edad);

    printf("Su nombre: %s %s, tiene %d\n", nombre, apellido, edad);
}