#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras). */

int main(){

    char cadena_uno[50];
    int longitud_cadena;

    for(int i = 0; i < 3; i++) {

        printf("Ingrese la cadena número %d:\n",i+1);
        //scanf("%s", &cadena_uno); --> No se pueden ingresar espacios

        //Me deja ingresar espacios
        fgets(cadena_uno, sizeof(cadena_uno), stdin);
        cadena_uno[strcspn(cadena_uno, "\n")] = '\0';

        longitud_cadena = strlen(cadena_uno);

        printf("La longitud de la cadena ingresada es de %d caracteres.\n", longitud_cadena);

    }

    return 0;
}