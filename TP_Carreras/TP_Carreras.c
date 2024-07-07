/*TP Carreras
El programa debe permitir conocer para una carrera dada el piloto que
obtuvo la pole position y los pilotos que subieron al podio.
El programa recibirá dos archivos que le darán los datos necesarios para
realizar la tarea correspondiente.*/

// LIBRERÍAS:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// VARIABLES GLOBALES:
char tiempos[388][6][50];
char pilotos[60][7][50];

// INICIALIZACIÓN DE SUBPROCESOS:
void CARGA_PILOTOS();
void CARGA_TIEMPOS();
int MENU_PRINCIPAL();
int MENU_CARRERAS();
void POLE_POSITION(int carrera);
void ORDENAR_TIEMPOS();
void TRES_MEJORES(int carrera);

int main()
{
    int opc;

    CARGA_PILOTOS(pilotos);
    CARGA_TIEMPOS(tiempos);

    do
    {
        opc = MENU_PRINCIPAL();
        switch (opc)
        {
        case 1:
            POLE_POSITION(MENU_CARRERAS());
            break;
        case 2:
            TRES_MEJORES(MENU_CARRERAS());
            break;
        case 3:
            printf("Gracias por consultar las estadisticas de la Asociacion de Corredores Turismo Carretera.\n");
            printf("\n");
            break;
        default:
            printf("La opcion ingresada no es valida. Intentelo de nuevo.\n");
        }
    } while (opc != 3);

    return 0;
}

//----------------------------------------------------------------

// SUBPROCESOS DE CARGA DE LOS ARCHIVOS .TXT EN ARREGLOS BIDIMENSIONALES

// Pilotos (con explicaciones de todos los pasos):
void CARGA_PILOTOS()
{
    int i;
    // Creamos las variables en las que se van a almacenar los datos de cada columna. En este caso, son todos tipo char.
    char num_auto[50], apellido[50], nombre[50], edad[50], ciudad[50], marca_auto[50], nombre_equipo[50];

    // Se declara una variable ("f") con puntero que almacena la dirección de una estructura FILE.
    FILE *f;
    // Abrimos el archivo pilotos.txt para Lectura ("r").
    f = fopen("pilotos.txt", "r");

    i = 0;
    // El bucle terminará cuando se haya alcanzado el final del archivo Y i sea menor a 60 (la cantidad de filas del archivo).
    while (!feof(f) && i < 60)
    {
        // Se leen los datos desde el archivo y se guardan en las variables creadas en línea 64.
        fscanf(f, "%s %s %s %s %s %s %s", num_auto, apellido, nombre, edad, ciudad, marca_auto, nombre_equipo);

        // Guardamos los datos de las variables en nuestro arreglo bidimensional
        strcpy(pilotos[i][0], num_auto);
        strcpy(pilotos[i][1], apellido);
        strcpy(pilotos[i][2], nombre);
        strcpy(pilotos[i][3], edad);
        strcpy(pilotos[i][4], ciudad);
        strcpy(pilotos[i][5], marca_auto);
        strcpy(pilotos[i][6], nombre_equipo);
        i++;
    }
    // Cierra el archivo
    fclose(f);
}
// Tiempos:
void CARGA_TIEMPOS()
{
    int i;
    char num_auto[50], vueltas[50], minutos[50], segundos[50], num_carrera[50], etapa[50];
    FILE *f;
    f = fopen("tiempos.txt", "r");

    i = 0;
    while (!feof(f) && i < 388)
    {
        fscanf(f, "%s %s %s %s %s %s", num_auto, vueltas, minutos, segundos, num_carrera, etapa);

        strcpy(tiempos[i][0], num_auto);
        strcpy(tiempos[i][1], vueltas);
        strcpy(tiempos[i][2], minutos);
        strcpy(tiempos[i][3], segundos);
        strcpy(tiempos[i][4], num_carrera);
        strcpy(tiempos[i][5], etapa);
        i++;
    }
    fclose(f);
}

//----------------------------------------------------------------

// MENUES DEL USUARIO QUE DEVUELVEN LA OPCIÓN ELEGIDA:

// Menú principal:
int MENU_PRINCIPAL()
{
    int opc;

    printf("\nACTC 2024\n");
    printf("1-Pole Position Carrera\n");
    printf("2-Podio Carrera\n");
    printf("3-Salir\n");
    printf("Ingrese opcion\n");

    scanf("%d", &opc);

    printf("\n");

    return opc;
}
// Menú de carreras:
int MENU_CARRERAS()
{
    int carrera;

    printf("CARRERAS:\n");
    printf("1- El Calafate\n");
    printf("2- Viedma\n");
    printf("3- Neuquen\n");
    printf("Ingrese opcion\n");

    scanf("%i", &carrera);

    printf("\n");

    return carrera;
}

//----------------------------------------------------------------

// Subproceso que devuelve el nombre y apellido del corredor en Pole Position en el número de carrera ingresado por el usuario.
void POLE_POSITION(int carrera)
{
    bool primero = true;
    int pole_position;

    // recorre todas las filas del archivo tiempos.txt
    for (int i = 0; i < 388; i++)
    {
        // solo haremos la comparación si se cumplen con los requisitos: que el tiempo sea de la etapa "clasificación" y que sea de la carrera que ingresó el usuario.
        if (strcmp(tiempos[i][5], "clasificacion") == 0 && atof(tiempos[i][4]) == carrera)
        {
            if (primero == true)
            {
                // cuando entre por primera vez al if de comparación, ese valor será denominado como pole position hasta que se comience a comparar con los siguientes.
                pole_position = i;
                primero = false;
            }
            else
            {
                // Si los minutos (que están en la columna 2) son iguales en los dos tiempos, se comparan los segundos (columna 3).
                if (atof(tiempos[i][2]) == atof(tiempos[pole_position][2]) && atof(tiempos[i][3]) < atof(tiempos[pole_position][3]))
                {
                    pole_position = i;
                }
                // Si los minutos ya son menores, no hace falta comparar los segundos.
                else if (atof(tiempos[i][2]) < atof(tiempos[pole_position][2]))
                {
                    pole_position = i;
                }
            }
        }
    }
    // Recorre todas las filas de pilotos.txt.
    for (int j = 0; j < 60; j++)
    {
        // En el archivo tiempos.txt solo aparece el número del corredor que hizo el mejor tiempo.
        // Es por eso que para poder mostrar el nombre del corredor en pantalla, tenemos que comparar los números del archivo tiempos.txt y el archivo pilotos.txt hasta que encontremos una coincidencia.
        if (atof(pilotos[j][0]) == atof(tiempos[pole_position][0]))
        {
            printf("El piloto en Pole Position para la carrera %d es %s %s.\n", carrera, pilotos[j][1], pilotos[j][2]);
        }
    }
}

// Subproceso que muestra todos los datos de los tres corredores con los menores tiempos en el número de carrera ingresado por el usuario.
void TRES_MEJORES(int carrera)
{
    int posicion = 1;
    int mejor;
    ORDENAR_TIEMPOS();
    for (int i = 0; i < 388; i++)
    {
        if (atof(tiempos[i][1]) == 25 && atof(tiempos[i][4]) == carrera)
        {
            mejor = atof(tiempos[i][0]);

            printf("\n");

            for (int j = 0; j < 60; j++)
            {
                //Como el arreglo está ordenado, los tres primeros pilotos que cumplan con los requisitos van a ser los tres mejores.
                if (atof(pilotos[j][0]) == mejor)
                {
                    printf("Posicion %d:\n Numero de auto:%s\n Apellido:%s\n Nombre:%s\n Marca de auto:%s\n", posicion, pilotos[j][0], pilotos[j][1], pilotos[j][2], pilotos[j][5]);
                    posicion++;
                }
            }
        }
        //Cuando ya mostramos los 3 mejores, se cierra el bucle.
        if (posicion == 4)
        {
            printf("\n");
            i = 388;
        }
    }
}

// Subproceso que ordena el arreglo de tiempos según los minutos y los segundos de menor a mayor.
void ORDENAR_TIEMPOS()
{
    int i, j, c, pos_menor;
    char aux[50];
    for (i = 0; i < 387; i++)
    {
        pos_menor = i;
        for (j = i + 1; j < 388; j++)
        {
            if (atof(tiempos[j][2]) == atof(tiempos[pos_menor][2]) && atof(tiempos[j][3]) < atof(tiempos[pos_menor][3]))
            {
                pos_menor = j;
            }
            else if (atof(tiempos[j][2]) < atof(tiempos[pos_menor][2]))
            {
                pos_menor = j;
            }
        }
        for (c = 0; c < 6; c++)
        {
            strcpy(aux, tiempos[i][c]);
            strcpy(tiempos[i][c], tiempos[pos_menor][c]);
            strcpy(tiempos[pos_menor][c], aux);
        }
    }
}