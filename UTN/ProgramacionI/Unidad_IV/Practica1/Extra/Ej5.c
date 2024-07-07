#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escriba un algoritmo donde se le pida al usuario que ingrese la cantidad de personas invitadas a un evento, luego pedir que ingresé
los nombres de la misma y el tipo de menú. Al finalizar la carga mostrar al usuario la lista de invitados con el menú seleccionando.
El menú puede ser "tradicional", "vegano" y "Sin TACC"*/

struct Lista
{
    char nombre[50];
    char menu[20];
};

int main()
{
    int cant_invitados, seleccion_menu, i;

    printf("Cuantos invitados va a haber en el evento?\n");
    scanf("%d", &cant_invitados);

    //limpiar buffer
    while (getchar() != '\n');

    struct Lista lista_evento[cant_invitados];

    for(i = 0; i < cant_invitados; i++)
    {
        printf("\nIngrese el nombre del invitado %d:\n", i + 1);
        fgets(lista_evento[i].nombre, sizeof(lista_evento[i].nombre), stdin);
        lista_evento[i].nombre[strcspn(lista_evento[i].nombre, "\n")] = '\0';

        printf("Que menu va a seleccionar %s?:\n1. Tradicional\n2.Vegano\n3.Sin TACC\n", lista_evento[i].nombre);
        do
        {
            scanf("%d", &seleccion_menu);
            switch (seleccion_menu) {
                case 1:
                    strcpy(lista_evento[i].menu, "Tradicional");
                    break;
                case 2:
                    strcpy(lista_evento[i].menu, "Vegano");
                    break;
                case 3:
                    strcpy(lista_evento[i].menu, "Sin TACC");
                    break;
                default:
                    printf("Por favor, ingrese una opcion valida.\n");
            }

        }while(seleccion_menu != 1 && seleccion_menu != 2 && seleccion_menu != 3);

        while (getchar() != '\n');

    }

    printf("\nLista completa con menu seleccionado:\n");
    for(i = 0; i < cant_invitados; i++)
    {
        printf("Invitado: %s\tMenu: %s\n", lista_evento[i].nombre, lista_evento[i].menu);
    }

    return 0;
}