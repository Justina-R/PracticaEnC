#include <stdio.h>
#include <stdlib.h>

/*Escriba un algoritmo que lea un arreglo de N x 5 indicando que una empresa tiene N vendedores cada uno de los cuales vende 5
productos. El arreglo almacena los ingresos obtenidos por cada vendedor en cada producto, imprimir el total de cada vendedor y
obtener los ingresos totales de la tienda.*/

int main(){
    int cant_empleados;
    float total_vendedor, total_empresa = 0;

    printf("Cuantos empleados tiene su empresa?\n");
    scanf("%d", &cant_empleados);

    float arreglo_empleados[cant_empleados][5];

    for(int i = 0; i < cant_empleados; i++){
        total_vendedor = 0;
        printf("\nEmpleado %d:\n", i + 1);
        for(int j = 0; j < 5; j++){
            printf("Ingresos del Producto %d:\n", j + 1);
            scanf("%f", &arreglo_empleados[i][j]);
            total_vendedor += arreglo_empleados[i][j];
        }
        printf("El total de ingresos del Empleado %d fue de $%.2f.\n", i + 1, total_vendedor);
        total_empresa += total_vendedor;
    }
    printf("\nEl total de ingresos de la empresa fue de $%.2f.\n", total_empresa);


    return 0;
}