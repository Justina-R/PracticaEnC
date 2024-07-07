#include <stdio.h>
#include <stdlib.h>

/*Dado el vector {10, 20, 5, 15, 30, 20}
a. Informar el vector de la forma: "Índice: X, Valor: Y".
b. Totalizar el vector e informar el total.
c. Informar el contenido de las posiciones impares.
d. Informar las posiciones que contienen números impares.
e. Informar el mayor número.
f. Informar cuántas veces aparece el número 20.*/

int main(){

    int contador_veinte, mayor_numero, total_vector, repetir, i;
    int vector[] = {10, 20, 5, 15, 30, 20};
    char opcion;

    do{
        repetir = 0;
        printf("Ingrese la opcion que desea ejecutar:\n a. Informar el vector de la forma: Indice: X, Valor: Y.\n b. Totalizar el vector e informar el total.\n c. Informar el contenido de las posiciones impares.\n d. Informar las posiciones que contienen numeros impares.\n e. Informar el mayor numero.\n f. Informar cuantas veces aparece el numero 20.\n");
        scanf(" %c", &opcion);

        switch(opcion){
            case 'a': 
                for(i = 0; i < 6; i++){
                    printf("Indice: %d, Valor: %d.\n", i, vector[i]);
                }
                break;
            case 'b':
                total_vector = 0;
                for(i = 0; i < 6; i++){
                    total_vector += vector[i];
                }
                printf("El total de todos los elementos del vector es de %d.\n", total_vector);
                break;
            case 'c':
                printf("Contenido de las posiciones impares del vector:\n");
                for(i = 0; i < 6; i++){
                    if(i%2 != 0){
                        printf("Posicion: %d, Contenido: %d.\n", i, vector[i]);
                    }
                }
                break;
            case 'd':
                printf("Posiciones que contienen numeros impares en el vector:\n");
                for(i = 0; i < 6; i++){
                    if(vector[i]%2 != 0){
                        printf("Posicion: %d, Contenido: %d.\n", i, vector[i]);
                    }
                }
                break;
            case 'e':
                mayor_numero = vector[0];
                for(i = 0; i < 6; i++){
                    if (mayor_numero < vector[i]){
                        mayor_numero = vector[i];
                    }
                }
                printf("El mayor numero del vector es %d.\n", mayor_numero);
                break;
            case 'f':
                contador_veinte = 0;
                for(i = 0; i < 6; i++){
                    if(vector[i] == 20){
                        contador_veinte++;
                    }
                }
                printf("En este vector, el numero 20 se repite %d veces.\n", contador_veinte);
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

