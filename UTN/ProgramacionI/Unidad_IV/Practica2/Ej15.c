#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escribe un programa que solicite al usuario una cadena de caracteres y luego imprima la
cadena invertida.*/

int main(){

    char cadena[25];

    printf("Ingrese una cadena:\n");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    printf("Cadena invertida:\n");
    for(int i = strlen(cadena); i >= 0 ; i--){
        printf("%c", cadena[i]);
    }
    return 0;
}