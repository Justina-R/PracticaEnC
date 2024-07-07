#include <stdio.h>

/*Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio.*/

void main() {
    // Declaración de variables
    float calificaciones[5][3];
    float promedioAlumno[5] = {0};
    float promedioGeneral = 0;
      // Lectura de calificaciones
    for (int i = 0; i < 5; i++) {
        printf("Ingrese las 3 calificaciones del alumno %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &calificaciones[i][j]);
            promedioAlumno[i] += calificaciones[i][j];
        }
        promedioAlumno[i] /= 3;
        promedioGeneral += promedioAlumno[i];
    }
       // Cálculo del promedio general
    promedioGeneral /= 5;

    // Mostrar resultados
    printf("\nPromedio por alumno:\n");
    for (int i = 0; i < 5; i++) {
        printf("Alumno %d: %.2f\n", i + 1, promedioAlumno[i]);
    }
    printf("\nPromedio general: %.2f\n", promedioGeneral);

}