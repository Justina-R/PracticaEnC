#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Crear una función que devuelva la primera letra de una cadena de texto.

char devuelvePrimerCaracter(char cadena[10]);

int main()
{
    char cadena[10];
    char primerCaracter;

    printf("Ingrese una palabra\n");
    scanf("%s", &cadena);

    primerCaracter = devuelvePrimerCaracter(cadena);
    printf("La primer letra de la palabra ingresada es %c.\n", primerCaracter);

    system("pause");

    return 0;
}

char devuelvePrimerCaracter(char cadena[10])
{
    return cadena[0];
}