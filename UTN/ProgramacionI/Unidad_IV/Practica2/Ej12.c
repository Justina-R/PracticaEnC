#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//para poder usar toupper:
#include <ctype.h>

//Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.

int main() {
    char nombre_uno[25];
    char nombre_dos[25];
    char inicial_uno, inicial_dos;

    printf("Ingrese un nombre:\n");
    fgets(nombre_uno, 24, stdin);
    nombre_uno[strcspn(nombre_uno, "\n")] = '\0';

    printf("Ingrese otro nombre:\n");
    fgets(nombre_dos, 24, stdin);
    nombre_dos[strcspn(nombre_dos, "\n")] = '\0';

    //toupper pone los caracteres indicados en mayúscula
    inicial_uno = toupper(nombre_uno[0]);
    inicial_dos = toupper(nombre_dos[0]);

    if(strcmp(nombre_uno, nombre_dos) == 0){
        printf("Los nombres son iguales.\n");
    } else if (inicial_uno < inicial_dos) {
        printf("El nombre %s precede alfabeticamente al nombre %s.\n", nombre_uno, nombre_dos);
    } else {
        printf("El nombre %s precede alfabeticamente al nombre %s.\n", nombre_dos, nombre_uno);
    }
    return 0;
}