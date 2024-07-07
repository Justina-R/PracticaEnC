#include <stdio.h>
#include <stdlib.h>

/*Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
que es 0.9 representa la inflación de diciembre. Se pide:
a. Informar la inflación anual
b. Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 =
0.1
c. Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 =
0.9*/

int main(){

    float inflacion[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    char opcion;
    float inflacion_anual, inflacion_min, inflacion_max;
    int i, mes_inflacion_min, mes_inflacion_max, repetir;

    do {
        printf("Ingrese que accion desea realizar:\n a. Informar la inflacion anual\n b. Informar la inflacion mas baja, junto con el nro. de mes.\n c. Informar la inflacion mas alta, junto con el nro. de mes.\n");
        scanf(" %c", &opcion);
        repetir = 0;
        switch(opcion){
            case 'a':
                inflacion_anual = 0;
                for (i = 0; i < 12; i++){
                    inflacion_anual += inflacion[i];
                }
                printf("La inflacion anual es de %.2f.\n", inflacion_anual);
                break;
            case 'b':
                inflacion_min = inflacion[0];
                for (i = 0; i < 12; i++){
                    if(inflacion_min>inflacion[i]){
                        inflacion_min = inflacion[i];
                        mes_inflacion_min = i+1;
                    }
                }
                printf("La inflacion mas baja fue de %.2f y se dio en el mes %d.\n", inflacion_min, mes_inflacion_min);
                break;
            case 'c':
                inflacion_max = inflacion[0];
                for (i = 0; i < 12; i++){
                    if(inflacion_max<inflacion[i]){
                        inflacion_max = inflacion[i];
                        mes_inflacion_max = i+1;
                    }
                }
                printf("La inflacion mas alta fue de %.2f y se dio en el mes %d.\n", inflacion_max, mes_inflacion_max);
                break;
            default:
                printf("El valor ingresado no es valido. Intentelo de nuevo.\n");
                repetir = 1;
                break;
            }

            if(repetir == 0){
                do{
                    printf("Desea realizar otra opcion? Si=1 // No=0\n");
                    scanf("%d", &repetir);
                    if (repetir != 0 && repetir != 1){
                        printf("Opcion no valida. Intentelo de nuevo.\n");
                    }
                } while(repetir != 0 && repetir != 1);
            }
    }while (repetir == 1);
    
    printf("Bueno, chau.");

    return 0;
}