/*Ejercicio 6 / Práctica en Pseudocódigo

A partir de una lista de corredores ya ingresada, realizar un programa que muestre la siguiente opción de menú al usuario:
    1- Mostrar lista de corredores
    2 - Mostrar los tres mejores
    3- Mostrar lista de completa de resutados
    4 - salir.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *corredores[] = {
    "Pedro Gomez",
    "Martín Ceres",
    "Ernestina Diaz",
    "Gastón Bautista",
    "Dalma Alvarez",
    "Patricio Fernandez",
    "Faustina Martinez",
    "Andrea Perez",
    "Hilda Lopez",
    "León García"
};

int posiciones[] = { 7, 6, 1, 2, 8, 3, 10, 9, 4, 5 };

void ListaCorredores();
void losMejores();
void resultados();

int main()
{
    int opc;

    do
    {
        printf("\n");
        printf("Seleccione una opción:\n");
        printf("1- Mostrar Corredores\n2- Mostrar los 3 mejores\n3- Lista completa de resultados\n4- Salir\n");
        printf("Ingrese la opción: ");
        scanf("%d", &opc);
        printf("\n");

        switch (opc)
        {
        case 1: // Mostrar Corredores
            ListaCorredores();
            break;
        case 2: // Mostrar los 3 mejores
            losMejores();
            break;
        case 3: // Lista completa de resultados
            resultados();
            break;
        case 4: // Salir
            printf("Saliendo del menú...\n");
            break;
        default:
            printf("Ingrese una opción válida.");
            break;
        }
    } while (opc != 4);

    printf("Hasta pronto.\n");

    return 0;
}

void ListaCorredores()
{
    printf("Lista de Corredores:\n");

    for(int i = 0; i < 9; i++)
    {
        printf("\t%s\n", corredores[i]);
    }
}

void losMejores()
{
    printf("Los 3 mejores son:\n");

    for(int i = 0; i<10; i++)
    {
        if (posiciones[i] == 1 || posiciones[i] == 2 || posiciones[i] == 3)
        {
            printf("%s con posición: %d\n", corredores[i], posiciones[i]);
        }
    }
}

void resultados()
{
    printf("Los resultados finales:\n");

    for(int i = 0; i<10; i++)
    {
        printf("%s\t%d\n", corredores[i], posiciones[i]);
    }
}