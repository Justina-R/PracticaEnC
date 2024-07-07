/*Ejercicio 8/Práctica de Ejercicios Combinados
Se dispone de un conjunto de corredores de una carrera de 3 vueltas, se contabiliza para cada
vuelta la marca obtenida por cada corredor. Se desea saber:
    ● Número del corredor con el mejor promedio (más bajo).
    ● Promedio general de la carrera.
    ● Promedio general por vuelta.
Validar que las marcas sean un número entero positivo.
El número del corredor es un entero entre [2000, 3000].*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num_corredor, num_vuelta, cant_corredores, mejor_corredor;
    float tiempo_vuelta, promedio_tiempo_vuelta, promedio_general, mejor_tiempo;
    int j;
    printf("Ingrese la cantidad de corredores:\n");
    scanf("%d", &cant_corredores);
    // Por vuelta
    for (num_vuelta = 1; num_vuelta <= 3; num_vuelta++)
    {
        printf("Vuelta %d\n", num_vuelta);
        // Por concursantes
        for (j = 1; j <= cant_corredores; j++)
        {
            printf("Ingrese el número de corredor:\n");
            // Entero entre 2000 y 3000
            do
            {
                scanf("%d", &num_corredor);
                if (num_corredor < 2000 || num_corredor > 3000)
                {
                    printf("El número de corredor debe estar entre 2000 y 3000.");
                };
            } while (num_corredor < 2000 || num_corredor > 3000);
            // tiempo debe ser mayor q 0
                      do
            {
                printf("Ingrese la marca del corredor %d para la vuelta %d:", j, num_vuelta);
                scanf("%f", &tiempo_vuelta);
                if (tiempo_vuelta < 0)
                {
                    printf("La marca debe ser un número entero positivo.");
                };
            } while (tiempo_vuelta < 0);
            promedio_tiempo_vuelta += tiempo_vuelta;
            promedio_general += tiempo_vuelta;
            // mejor tiempo y mejor corredor
            if (num_vuelta == 0 && j == 0)
            {
                mejor_corredor = num_corredor;
                mejor_tiempo = tiempo_vuelta;
            }
            else if (tiempo_vuelta < mejor_tiempo)
            {
                mejor_corredor = num_corredor;
                mejor_tiempo = tiempo_vuelta;
            }
        }

        printf("Promedio de la vuelta: %.2f\n", promedio_tiempo_vuelta / cant_corredores);
    }
    printf("Promedio General: %.2f\n", promedio_general / cant_corredores);
    printf("Corredores con el mejor promedio en las 3 vueltas:%d \n Su tiempo fue de: %.2f\n ", mejor_corredor, mejor_tiempo);
}