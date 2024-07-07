#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escribir un algoritmo que muestre un país y sus ciudades relacionadas. Los países y sus ciudades son:
País         Ciudad 1       Ciudad 2        Ciudad 3
Argentina  Buenos Aires     Rosario         Córdoba
Colombia       Cali         Bogotá        Santa Marta
Brasil       Brasilia    Río de Janeiro    San Pablo
*/

void main(){
    char paises_y_ciudades[4][4][25];

    strcpy(paises_y_ciudades[0][0], "Pais");
    strcpy(paises_y_ciudades[0][1], "Ciudad 1");
    strcpy(paises_y_ciudades[0][2], "Ciudad 2");
    strcpy(paises_y_ciudades[0][3], "Ciudad 3");

    strcpy(paises_y_ciudades[1][0], "Argentina");
    strcpy(paises_y_ciudades[1][1], "Buenos Aires");
    strcpy(paises_y_ciudades[1][2], "Rosario");
    strcpy(paises_y_ciudades[1][3], "Cordoba");

    strcpy(paises_y_ciudades[2][0], "Colombia");
    strcpy(paises_y_ciudades[2][1], "Cali");
    strcpy(paises_y_ciudades[2][2], "Bogota");
    strcpy(paises_y_ciudades[2][3], "Santa Marta");

    strcpy(paises_y_ciudades[3][0], "Brasil");
    strcpy(paises_y_ciudades[3][1], "Brasilia");
    strcpy(paises_y_ciudades[3][2], "Rio de Janeiro");
    strcpy(paises_y_ciudades[3][3], "San Pablo");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%s\t", paises_y_ciudades[i][j]);
        }
        printf("\n");
    }
}