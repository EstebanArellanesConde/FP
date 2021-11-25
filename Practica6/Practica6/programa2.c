#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("El tamano en memoria de un entero es %d bytes\n", sizeof(int));
    printf("El tamano en memoria de un entero corto es %d\n", sizeof(short));
    printf("El tamano en memoria de un entero largo es %d bytes\n", sizeof(long));
    printf("El tamano en memoria de un flotante es %d bytes\n", sizeof(float));
    printf("El tamano en memoria de un doble precision es %d bytes\n", sizeof(double));
    printf("El tamano en memoria de un doble precision largo es %d bytes\n", sizeof(long double));
    printf("El tamano en memoria de un caracter es %d bytes\n", sizeof(char));
    printf("El tamano en memoria de un booleano es %d bytes\n", sizeof(bool));
    printf("El tamano en memoria de un void es %d bytes\n", sizeof(void));

    printf("El tamano en memoria de un entero con signo es %d bytes\n", sizeof(signed int));
    printf("El tamano en memoria de un entero sin signo es %d bytes\n", sizeof(unsigned int));

    return 0;
}