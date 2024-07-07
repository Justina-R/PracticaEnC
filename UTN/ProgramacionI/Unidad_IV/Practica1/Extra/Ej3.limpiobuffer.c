#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escriba un algoritmo donde se le pida al usuario que ingrese la cantidad de personas invitadas a un evento, luego pedir que ingrese
los nombres de la misma. Al finalizar la carga mostrar al usuario la lista de invitados.*/

int main(){
    int cant_invitados, i;

    printf("Cuantas personas invito a su evento?\n");
    scanf("%d", &cant_invitados);

    char lista_invitados[cant_invitados][30];

    /* Limpiar el buffer de entrada después de scanf.
    Explicación:Después de llamar a scanf, queda un carácter de nueva línea ('\n') en el buffer de entrada,
    lo cual provoca que fgets lo lea inmediatamente y no te permita introducir el nombre del invitado correctamente.*/
    while (getchar() != '\n'); 

    for(i = 0; i < cant_invitados; i++){
        printf("Nombre del invitado %d:\n", i + 1);
        fgets(lista_invitados[i], sizeof(lista_invitados[i]), stdin);
        lista_invitados[i][strcspn(lista_invitados[i], "\n")] = '\0';
    }

    printf("\nLista de invitados:\n");
    for(i = 0; i < cant_invitados; i++){
        printf("- %s\n", lista_invitados[i]);
    }

    return 0;
}