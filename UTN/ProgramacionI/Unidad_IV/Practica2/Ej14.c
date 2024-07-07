#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escribe un programa que solicite al usuario una cadena de caracteres y luego cuente el
número de vocales que contiene.*/

int main(){

    char cadena[25];
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    int cant_vocales;

    cant_vocales = 0;


    printf("Ingrese una cadena de caracteres en minúscula:\n");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    for(int i = 0; i<strlen(cadena); i++){
        for(int j = 0; j<4; j++){
            if(cadena[i] == vocales[j]){
                cant_vocales++;
                break;
            }
        }
    }

    printf("La cadena ingresada tiene %d vocales.", cant_vocales);

    return 0;
}