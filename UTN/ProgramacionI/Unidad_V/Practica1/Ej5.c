/*Ejercicio 5 / Práctica en Pseudocódigo
Realizar un programa que le pida al usuario que ingrese una lista de 10 alumnos y
los resultados del examen final. Luego el programa llamará a una función que
calcula el promedio de notas, a otra función que calcula la mayor nota,
y otra que calcula la menor nota. Luego el sistema informará estos 3 valores al usuario.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

float promedioNotas(float acumulador);
float mayorNota(float notas[]);
float menorNota(float notas[]);

int main()
{
    float notasAlumnos[10], acumuladorNotas, laMayorNota;
    acumuladorNotas = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese nota del alumno: %d\n", i + 1);
        scanf("%f", &notasAlumnos[i]);
        acumuladorNotas = acumuladorNotas + notasAlumnos[i];
    }

    printf("El promedio general es de: %.2f\n", promedioNotas(acumuladorNotas));
    printf("La mayor nota es de: %.2f\n", mayorNota(notasAlumnos));
    printf("La menor nota es de: %.2f\n", menorNota(notasAlumnos));

    return 0;
}

float promedioNotas(float acumulador)
{
    return acumulador / 10;
}

float mayorNota(float notas[])
{
    float mayorNota;

    for (int i = 0; i < 10; i++)
    {
        if(i == 0)
        {
            mayorNota = notas[i];
        } else if (mayorNota < notas[i]) {
            mayorNota = notas[i];
        }
    }

    return mayorNota;
}

float menorNota(float notas[])
{
    float menorNota;

    for (int i = 0; i < 10; i++)
    {
        if(i == 0)
        {
            menorNota = notas[i];
        } else if (menorNota > notas[i]) {
            menorNota = notas[i];
        }
    }

    return menorNota;
}