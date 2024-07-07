#include <stdio.h>
#include <stdlib.h>

/*Realice un pseudocódigo que permita sumar los elementos de dos arreglos y guarde el resultado en otro arreglo. Deberá imprimir
el arreglo resultante, el tamaño del arreglo será introducido por el usuario, se debe comprobar que el tamaño del arreglo sea válido,
es decir, no permitir valores negativos y que sea mayor que 2.*/

int main(){
    int cant_elementos, i;

    do{
        printf("Cuantos numeros ingresara en cada arreglo?\n");
        scanf("%d", &cant_elementos);
        if(cant_elementos <= 2){
            printf("El numero ingresado no es valido. Intentelo de nuevo.\n");
        }
    }while(cant_elementos <= 2);

    int arreglo_uno[cant_elementos], arreglo_dos[cant_elementos], arreglo_suma[cant_elementos];

    for (i = 0; i < cant_elementos; i++){

        printf("Ingrese el elemento %d del primer arreglo:\n", i + 1);
        scanf("%d", &arreglo_uno[i]);

        printf("Ingrese el elemento %d del segundo arreglo:\n", i + 1);
        scanf("%d", &arreglo_dos[i]);

        arreglo_suma[i] = arreglo_uno[i] + arreglo_dos[i];
    }

    for(i = 0; i < cant_elementos; i++){
        printf("Resultado linea %d: %d\n", i + 1, arreglo_suma[i]);
    }

    return 0;
}
