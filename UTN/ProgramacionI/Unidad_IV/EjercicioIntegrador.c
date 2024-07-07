#include <stdio.h>
#include <stdlib.h>

/*Deseamos realizar un programa que gestione las notas de una materia de N alumnos para las 3
comisiones. Suponer que todas las comisiones tienen la misma cantidad N de alumnos que
debe solicitarse por teclado antes del menú.
El programa debe mostrar un menú con las siguientes opciones:
1. Cargar notas alumnos por comisión
2. Promedio por Comisión
3. Promedio de la materia
4. Cantidad de aplazos en la materia
5. Cantidad de regularizados en la materia
6. Cantidad de aprobados en la materia
7. Salir*/

void cargar_arreglo(float comision[], int size);
float sacar_promedio(float comision[], int size);
int sacar_por_nota(float comision[], int size, int nota_min, int nota_max);

int main()
{
    int cant_alumnos, opcion, cant_aplazos, cant_regularizados, cant_aprobados, esta_cargado;

    printf("Cuantos alumnos hay por comision?\n");
    scanf("%d", &cant_alumnos);

    float comision_uno[cant_alumnos], comision_dos[cant_alumnos], comision_tres[cant_alumnos], promedio_general;

    esta_cargado = 0;

    do
    {
        printf("\nMenu de opciones:\n1. Cargar notas alumnos por comision\n2. Promedio por comision\n3. Promedio de la materia\n4. Cantidad de aplazos en la materia\n5. Cantidad de regularizados en la materia\n6. Cantidad de aprobados en la materia\n7. Salir\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("\nComision 1:\n");
                cargar_arreglo(comision_uno, cant_alumnos);
                printf("Comision 2:\n");
                cargar_arreglo(comision_dos, cant_alumnos);
                printf("Comision 3:\n");
                cargar_arreglo(comision_tres, cant_alumnos);
                esta_cargado = 1;
                break;
            case 2:
                //Pongo un if para asegurarme de que no quieran hacer cuentas con el arreglo vacío (lo mismo en todos los casos).
                if (esta_cargado == 1)
                {
                    printf("\nEl promedio de la comision 1 es de %.2f.\n", sacar_promedio(comision_uno, cant_alumnos));
                    printf("El promedio de la comision 2 es de %.2f.\n", sacar_promedio(comision_dos, cant_alumnos));
                    printf("El promedio de la comision 3 es de %.2f.\n", sacar_promedio(comision_tres, cant_alumnos));
                }else{
                    printf("\nPara poder realizar esta accion, debe cargar las notas de los alumnos (opcion 1).\n");
                }
                break;
            case 3:
                if(esta_cargado == 1){
                    promedio_general = (sacar_promedio(comision_uno, cant_alumnos) + sacar_promedio(comision_dos, cant_alumnos) + sacar_promedio(comision_tres, cant_alumnos))/3;
                    printf("\nEl promedio de la materia es de %.2f.\n", promedio_general);
                }else{
                    printf("\nPara poder realizar esta accion, debe cargar las notas de los alumnos (opcion 1).\n");
                }
                break;
            case 4:
                if(esta_cargado == 1){
                    cant_aplazos = sacar_por_nota(comision_uno, cant_alumnos, 0, 3) + sacar_por_nota(comision_dos, cant_alumnos, 0, 3) + sacar_por_nota(comision_tres, cant_alumnos, 0, 3);
                    printf("\nCantidad de aplazos en la materia: %d\n", cant_aplazos);
                }else{
                    printf("\nPara poder realizar esta accion, debe cargar las notas de los alumnos (opcion 1).\n");
                }
                break;
            case 5:
                if(esta_cargado == 1){
                    cant_regularizados = sacar_por_nota(comision_uno, cant_alumnos, 4, 5) + sacar_por_nota(comision_dos, cant_alumnos, 4, 5) + sacar_por_nota(comision_tres, cant_alumnos, 4, 5);
                    printf("\nCantidad de regularizados en la materia: %d\n", cant_regularizados);
                }else{
                    printf("\nPara poder realizar esta accion, debe cargar las notas de los alumnos (opcion 1).\n");
                }
                break;

            case 6:
                if(esta_cargado == 1){
                    cant_regularizados = sacar_por_nota(comision_uno, cant_alumnos, 6, 10) + sacar_por_nota(comision_dos, cant_alumnos, 6, 10) + sacar_por_nota(comision_tres, cant_alumnos, 6, 10);
                    printf("\nCantidad de aprobados en la materia: %d\n", cant_regularizados);
                }else{
                    printf("\nPara poder realizar esta accion, debe cargar las notas de los alumnos (opcion 1).\n");
                }
                break;
            case 7:
                printf("\nBueno, chau.\n");
                break;
            default:
                printf("\nEl valor ingresado no es valido. Intentelo de nuevo.\n");
                break;
        }
    }while(opcion != 7);

    return 0;
}

void cargar_arreglo(float comision[], int size)
{
    for (int i = 0; i < size; i++)
    {   
        do
        {
            printf("Ingrese la nota del alumno %d:\n", i + 1);
            scanf("%f", &comision[i]);
            if(comision[i] < 0 || comision[i] > 10)
            {
                printf("La nota ingresada no es válida.\n");
            }
        }while(comision[i] < 0 || comision[i] > 10);
        
    }
}

float sacar_promedio(float comision[], int size)
{
    float promedio = 0;

    for (int i = 0; i < size; i++)
    {
        promedio += comision[i];
    }

    promedio = promedio/size;

    return promedio;
}

//Dependiendo de la nota máxima y mínima, te da la cantidad de alumnos con una nota dentro de ese rango.
int sacar_por_nota(float comision[], int size, int nota_min, int nota_max)
{
    int cant_aplazos = 0;

    for (int i = 0; i < size; i++)
    {
        if(comision[i] >= nota_min && comision[i] <= nota_max){
            cant_aplazos++;
        }
    }

    return cant_aplazos;
}