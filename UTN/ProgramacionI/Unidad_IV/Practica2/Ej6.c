#include <stdio.h>

/*Ingrese por teclado la facturación de los últimos 6 meses del año. Informar:
a. La facturación total
b. El promedio de facturación
c. La máxima facturación
d. La mínima facturación */

int main(){
    float facturaciones_mensuales[6], facturacion;
    //rango de indices posibles
    //[0, 5]
    float facturacion_total, facturacion_promedio, facturacion_min, facturacion_max;
    facturacion_total = 0;
    facturacion_max = 0;
    //cargar el arreglo
    for (int i = 0; i<=5; i++){
        do
        {
            printf("Ingrese la facturacion del mes %i :\n", i+7);
            scanf("%f", &facturaciones_mensuales[i]);
            if (facturaciones_mensuales[i]<0)
                printf("Error!, la facturacion debe ser mayor o igual a 0 \n");
        } while (facturaciones_mensuales[i]<0);
        
    }
    facturacion_min = facturaciones_mensuales[0];

    //recorro el arreglo para calular
    for (int i = 0; i<=5; i++){
        facturacion_total = facturacion_total + facturaciones_mensuales[i];
        //busco el maximo
        if (facturaciones_mensuales[i]>facturacion_max)
            facturacion_max = facturaciones_mensuales[i];
        //busco el minimo
        if (facturaciones_mensuales[i]<facturacion_min)
            facturacion_min = facturaciones_mensuales[i];
    }
    facturacion_promedio = facturacion_total / 6; 
    printf("La facturacion total para los 6 meses es %.2f \n", facturacion_total);
    printf("La facturacion maxima es %.2f y la minima %.2f \n", facturacion_max, facturacion_min);
    printf("La facturacion promedio es %.2f \n", facturacion_promedio);
}