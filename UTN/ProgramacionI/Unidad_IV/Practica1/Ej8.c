#include <stdio.h>
#include <stdlib.h>

/*Realizar un programa que permita almacenar números reales en una matriz de orden 4×3, cuatro filas y tres columnas. Además,
calcular e imprimir la suma de cada uno de los números ingresados.*/

int main(){
    float matriz_reales[4][3], suma = 0;


    printf("Ingrese todos los números que componen la matriz:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matriz_reales[i][j]);
            suma += matriz_reales[i][j];
        }
    }

    printf("La suma de todos los numeros de la matriz es igual a %.2f.\n", suma);


    return 0;
}