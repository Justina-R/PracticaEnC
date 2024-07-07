#include <stdio.h>
#include <stdlib.h>

/*Realice un algoritmo que lea en un arreglo las marcas obtenidas por 10 corredores en una carrera e imprimir cuántos tienen una
marca mayor, cuántos tienen una marca menor que el promedio y el promedio*/


void main(){

    float marcas_corredores[10], promedio;
    int cant_mayor_al_promedio = 0, cant_menor_al_promedio = 0;

    printf("Ingrese las marcas de los 10 corredores:\n");
    for(int i = 0; i < 10; i++){
        printf("Corredor %d:\n", i + 1);
        scanf("%d", &marcas_corredores[i]);
    }

   for(int i = 0; i < 10; i++){
        promedio += marcas_corredores[i];
    }

    promedio = promedio/10;

    for(int i = 0; i < 10; i++){
        if(marcas_corredores[i]>promedio){
            cant_mayor_al_promedio++;
        } else {
            cant_menor_al_promedio++;
        }
    }

    printf("El promedio de todos los corredores es de %.2f.\n", promedio);

    printf("Hay %d elementos que son mayores al promedio y %d elementos que son menores al promedio.\n", cant_mayor_al_promedio, cant_menor_al_promedio);

}


