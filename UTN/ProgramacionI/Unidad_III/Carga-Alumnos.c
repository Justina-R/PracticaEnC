#include <stdio.h>
#include <stdlib.h>
// Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
// Mostrar el promedio por alumno y el promedio general
void main()
{
    int i, j, cant_Alumnos;
    float promedio_Alumno, promedio_General, nota_Alumno;
    cant_Alumnos = 3;
    // por alumno
    for(i = 1; i <= cant_Alumnos; i++) {
        printf("Ingrese la nota del alumno %d\n", i);
        
        // por parcial
        for(j = 1; j <= 3; j++) {
            printf("NOTA DEL PARCIAL %d\n", j);
            scanf("%f", &nota_Alumno);
            promedio_Alumno += nota_Alumno;
        }
        promedio_Alumno = promedio_Alumno / 3;
        printf("El promedio del alumno %d es %.2f\n", i, promedio_Alumno);
        promedio_General += promedio_Alumno;
        promedio_Alumno = 0; // vuelve a iniciar acumulador para el próx alumno
    }
        promedio_General = promedio_General / cant_Alumnos;
        printf("El promedio general es: %.2f\n", promedio_General);
}