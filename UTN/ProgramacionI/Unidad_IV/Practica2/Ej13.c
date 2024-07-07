#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro,
concatenar de la forma "nombre apellido" para cada uno, y mostrar por consola.*/

int main(){

    char nombres[10][25];
    char apellidos[10][25];
    char nombres_completos[10][40];

    for(int i = 0; i < 3; i++){

        printf("Ingrese el nombre del alumno %d:\n", i + 1);
        fgets(nombres[i], sizeof(nombres[i]), stdin);
        nombres[i][strcspn(nombres[i], "\n")] = '\0';

        printf("Ingrese el apellido del alumno %d:\n", i + 1);
        fgets(apellidos[i], sizeof(apellidos[i]), stdin);
        apellidos[i][strcspn(apellidos[i], "\n")] = '\0';
        
        strcpy(nombres_completos[i], strcat(nombres[i], " "));
        strcpy(nombres_completos[i], strcat(nombres_completos[i], apellidos[i]));
    }

    printf("Lista de alumnos:\n");

    for(int i = 0; i < 3; i++){
        printf("%d. %s\n", i + 1, nombres_completos[i]);
    }

    return 0;
}