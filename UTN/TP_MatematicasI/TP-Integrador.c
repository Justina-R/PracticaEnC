/*TP integrador de la materia Matemáticas I:
Creamos una calculadora de conjuntos que permita hacer las operaciones básicas: Intersección, Unión, Diferencia y Complemento.*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int cargarArreglo(char arreglo[10][30]);
void interseccion(char a[10][30], char b[10][30], int contadorA, int contadorB);
void unionConjunto(char a[10][30], char b[10][30], int contadorA, int contadorB);
void diferencia(char a[10][30], char b[10][30], int contadorA, int contadorB);

int main()
{
    char universal[10][30], a[10][30], b[10][30];
    int contadorUniv, contadorA, contadorB;
    int opc, opcDiferencia;

    printf("\nIngrese los Elementos del Conjunto Universal: \n");
    contadorUniv = cargarArreglo(universal);
    printf("\nIngrese los Elementos del Conjunto A: \n");
    contadorA = cargarArreglo(a);
    printf("\nIngrese los Elementos del Conjunto B: \n");
    contadorB = cargarArreglo(b);

    do
    {
        printf("\n\n - Seleccione una opción:\n");
        printf("1- Intersección\n2- Unión\n3- Diferencia\n4- Complemento\n5- Salir\n");
        scanf("%i", &opc);

        switch (opc)
        {
        case 1:
            interseccion(a, b, contadorA, contadorB);
            break;
        case 2:
            unionConjunto(a, b, contadorA, contadorB);
            break;
        case 3:
            printf("\nDIFERENCIA: Ingrese opción:\n");
            printf("1- Diferencia A-B\n2- Diferencia B-A\n");
            scanf("%i", &opcDiferencia);

            if(opcDiferencia == 1)
            {
                diferencia(a, b, contadorA, contadorB);
            } else if(opcDiferencia == 2) {
                diferencia(b, a, contadorB, contadorA);
            } else {
                printf("Opción inválida.\n");
                break;
            }

            break;
        case 4:
            printf("\nCOMPLEMENTO: Ingrese opción:\n");
            printf("1- Complemento A\n2- Complemento B\n");
            scanf("%i", &opcDiferencia);

            if(opcDiferencia == 1)
            {
                diferencia(universal, a, contadorUniv, contadorA);
            } else if(opcDiferencia == 2) {
                diferencia(universal, b, contadorUniv, contadorB);
            } else {
                printf("Opción inválida.\n");
                break;
            }
            break;
        case 5:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opción Inválida.\n");
            break;
        }
    } while (opc != 5);

    return 0;
}

// Lo que hay en A pero no hay en B
void diferencia(char a[10][30], char b[10][30], int contadorA, int contadorB)
{
    int bandera = 0;


    printf("El conjunto resultado es = ");
    printf("{ ");

    for (int i = 0; i < contadorA; i++)
    {
        bandera = 0;

        for (int j = 0; j < contadorB; j++)
        {
            if(strcmp(a[i], b[j]) == 0)
            {
                bandera = 1;
            }
        }

        if(bandera == 0)
        {
            printf("%s ", a[i]);
        }
    }

    printf("}\n");
}

// printea lo hay en ambos conjuntos pero sin repetir los que se repiten
void unionConjunto(char a[10][30], char b[10][30], int contadorA, int contadorB)
{
    char unionAuxiliar[10][30];
    int repetidor = 0;
    int bandera = 0;

    printf("La unión entre A y B: \n");
    printf("{ ");

    // recorre conjunto A
    for (int i = 0; i < contadorA; i++)
    {
        strcpy(unionAuxiliar[i], a[i]); // guarda A en auxiliar
    }

    repetidor = contadorA;

    // recorre conjunto B
    for (int j = 0; j < contadorB; j++)
    {
        bandera = 0;

        for(int k = 0; k < contadorA; k++)
        {
            if(strcmp(unionAuxiliar[k], b[j]) == 0)
            {
                bandera = 1;
            }
        }

        if(bandera == 0)
        {
            strcpy(unionAuxiliar[repetidor], b[j]);
            repetidor++;
        }
    }

    for(int p = 0; p < repetidor; p++)
    {
        printf("%s ", unionAuxiliar[p]);
    }

    printf("}");
}

// printea intersección entre conjunto A y B
void interseccion(char a[10][30], char b[10][30], int contadorA, int contadorB)
{
    printf("La intersección entre A y B: \n");
    printf("{ ");

    // recorre conjunto A
    for (int i = 0; i < contadorA; i++)
    {
        // recorre conjunto B
        for (int j = 0; j < contadorB; j++)
        {
            // comparando elementos individuales de conjunto A y B
            // devuelve printf de intersección
            if (strcmp(a[i], b[j]) == 0)
            {
                printf("%s ", a[i]);
            }
        }
    }

    printf("}");
}

// carga Universal, conjunto A, conjunto B
// devuelve tamaño de cada arreglo
int cargarArreglo(char arreglo[10][30])
{
    int i = 0, contador = 0;
    char punto[10];

    printf("Ingrese un PUNTO para salir (.) \n");

    do
    {
        fgets(punto, sizeof(punto), stdin);
        punto[strcspn(punto, "\n")] = '\0';

        if (strcmp(punto, ".") != 0)
        {
            strcpy(arreglo[i], punto);
            contador++;
        }

        i++;
    } while (strcmp(punto, ".") != 0);

    return contador;
}