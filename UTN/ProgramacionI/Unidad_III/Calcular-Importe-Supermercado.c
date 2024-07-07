/*Ejercicio 5/ Ejercicios combinados

En un supermercado Toco, el cliente tiene un descuento del 10% si compra 15 o más productos de más y que el importe total supere
los $149.999. Además si es miembro de TocoPlus tiene un 5% de descuento adicional. Por cada uno de los productos se ingresa precio.
La cantidad de productos se supone conocida X y se ingresa por el usuario. Los precios de los productos sin sin IVA, por lo que se le debe
adicionar al importe total a abonar. Se desea conocer:
    ● El importe total a abonar con IVA incluido.
    ● La cantidad de productos.
    ● El monto de descuento.*/
//LIBRERÍA:
#include <stdio.h>

int main(){
    int cant_prod, descuento_total, importe_indiv;
    float importe_total, importe_descuento;
    char es_miembro;

    printf("Ingrese la cantidad de productos comprados:\n");
    scanf("%d", &cant_prod);

    importe_total = 0;
    descuento_total = 0;

    for(int i = 0; i < cant_prod; i++){
        printf("Ingrese el importe del producto %d:\n", i+1);
        scanf("%d", &importe_indiv);
        importe_total+=importe_indiv;
    }

    if(cant_prod>=15 && importe_total>149999){
        descuento_total=10;
    }

    printf("¿Es miembro de TocoPlus? (S o N)\n");
    scanf(" %c", &es_miembro);

    if(es_miembro == 'S'){
        descuento_total+=5;
    }

    importe_descuento= (importe_total * descuento_total)/100;
    importe_total-= importe_descuento;
    importe_total += (importe_total*21)/100;
    
    printf("El importe total es $%.2f.\n", importe_total);
    printf("Se ingresaron %d productos.\n", cant_prod);
    printf("Se descontaron $%.2f.\n", importe_descuento);

    return 0;
}