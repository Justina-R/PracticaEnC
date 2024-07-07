#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escriba un algoritmo donde se le pida al usuario que ingrese una lista de 30 alumnos y los resultados del parcial. Al finalizar la carga
mostrar los alumnos que aprobaron y los que no aprobaron.*/

// Inicializo una estructura que contenga dos tipos de datos(char e int)
struct Lista
{
    char nombre[100];
    int nota;
};

int main()
{   
    int i;
    //Creo una variable con el tipo de dato estructura que creé arriba
    struct Lista lista_alumnos[5];

    for (i = 0; i < 5; i++)
    {
        printf("\nIngrese el nombre del alumno %d:\n", i + 1);
        fgets(lista_alumnos[i].nombre, sizeof(lista_alumnos[i].nombre), stdin);
        lista_alumnos[i].nombre[strcspn(lista_alumnos[i].nombre, "\n")] = '\0';

        printf("Ingrese el resultado del parcial del alumno %d:\n", i + 1);
        scanf("%d", &lista_alumnos[i].nota);

        //limpio el buffer después de usar el scanf para que no quede almacenado el salto de línea del ingreso de la nota
        while (getchar() != '\n');
    }

    printf("\nAlumnos aprobados:\n");
    for (i = 0; i < 5; i++)
    {   
        if(lista_alumnos[i].nota >= 6){
            printf("Nombre: %s\tNota: %d\n", lista_alumnos[i].nombre, lista_alumnos[i].nota);
        }
        
    }

    printf("\nAlumnos desaprobados:\n");
    for (i = 0; i < 5; i++)
    {   
        if(lista_alumnos[i].nota < 6){
            printf("Nombre: %s\tNota: %d\n", lista_alumnos[i].nombre, lista_alumnos[i].nota);
        }
        
    }
    

    return 0;
}