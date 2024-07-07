/*Ejercicio 4 / Práctica en Pseudocódigo

Realizar un programa que permita cargar los datos de un cliente, Nombre, apellido, DNI. La
carga del DNI debe validarse a partir de una función llamada ValidarDNI, dicha función
recibirá como parámetro de entrada el dni ingresado y devolverá una variable del tipo lógica
Verdadero/Falso. Nota: El DNI debe estar formado por números y tener una longitud máxima
de 8 caracteres y una longitud mínima de 6 caracteres.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarDNI(char dni[]);

int main() {
    char nombre[50], apellido[50], dni[10];
    
    printf("Ingrese el nombre: ");
    scanf("%s", &nombre);
    printf("Ingrese el apellido: ");
    scanf("%s", &apellido);
    
    do {
        printf("Ingrese el DNI: ");
        scanf("%s", &dni);
        
        if (!validarDNI(dni)) {
            printf("DNI inválido. Debe ser numérico y tener entre 6 y 8 caracteres.\n");
        }
    } while (!validarDNI(dni));
    
    printf("Nombre: %s\nApellido: %s\nDNI: %s\n", nombre, apellido, dni);
    
    return 0;
}

int validarDNI(char dni[]) {
    int len = strlen(dni);//8   dni: 1122mm45
    
    if (len < 6 || len > 8) {
        return 0;
    }
    //1-1-2-2-m-m-4-5
    for (int i = 0; i < len; i++) {
        if (!isdigit(dni[i])) {
            return 0;
        }
    }
    //30741748
    return 1;
}