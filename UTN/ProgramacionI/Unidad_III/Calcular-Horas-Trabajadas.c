/*Ejercicio 4 / Práctica de Ejercicios Combinados

La empresa System SRL cuenta con 5 departamentos donde se realizan diferentes actividades
(A saber: marketing, comercial, soporte técnico, administrativo y finanzas). Para cada uno de
los departamentos se conoce el número de empleados X (se ingresa).
Se tiene por otro lado, por cada uno de los empleados dentro del departamento, la cantidad de
horas trabajadas y el código de turno de trabajo (“M”: Mañana, “T”: tarde).
Se deberá mostrar:
    ● La cantidad de horas trabajadas en cada departamento.
    ● La cantidad de horas trabajadas en turno tarde y turno mañana de toda la empresa.
*/

#include <stdio.h>

void main()
{

    int validar, i, deptos, cant_empleados, cant_horas, cant_horas_depto, cant_horas_turno_M, cant_horas_turno_T;
    char turno;

    cant_horas_turno_M = 0;
    cant_horas_turno_T = 0;

    for (deptos = 1; deptos <= 5; deptos++)
    {

        printf("Ingrese la cantidad de empleados en el área de ");

        switch (deptos)
        {
        case 1:
            printf("Marketing:\n");
            break;
        case 2:
            printf("Comunicación:\n");
            break;
        case 3:
            printf("Soporte:\n");
            break;
        case 4:
            printf("Admin:\n");
            break;
        case 5:
            printf("Finanzas:\n");
            break;
        }

        scanf("%d", &cant_empleados);
        cant_horas_depto = 0;

        for (i = 1; i <= cant_empleados; i++)
        {
            printf("Cant de horas trabajadas por el empleado %d:\n", i);
            scanf("%d", &cant_horas);

            cant_horas_depto += cant_horas;
            printf("¿Turno M o T?\n");
            scanf(" %c", &turno);

            do
            {
                if (turno == 'M')
                {
                    cant_horas_turno_M += cant_horas;
                    validar = 0;
                }
                else if (turno == 'T')
                {
                    cant_horas_turno_T += cant_horas;
                    validar = 0;
                }
                else
                {
                    validar = 1;
                    printf("Valor incorrecto.\n");
                    scanf(" %c", &turno);
                }
            } while (validar == 1);
        }
        printf("Cant de horas trabajadas en este depto: %d horas.\n", cant_horas_depto);
    }

    printf("Cant horas de turno mañana: %d horas.\n", cant_horas_turno_M);
    printf("Cant horas de turno tarde: %d horas.\n", cant_horas_turno_T);
}
