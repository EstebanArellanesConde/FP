#include <stdio.h>
#include <stdbool.h>

int main(){

    printf("El tamaño en memoria de un entero es %d bytes\n", sizeof(int));
    printf("El tamaño en memoria de un entero corto es %d bytes\n", sizeof(short));
    printf("El tamaño en memoria de un entero largo es %d bytes\n", sizeof(long));
    printf("El tamaño en memoria de un flotante es %d bytes\n", sizeof(float));
    printf("El tamaño en memoria de un doble precisión es %d bytes\n", sizeof(double));
    printf("El tamaño en memoria de un doble precisión largo es %d bytes\n", sizeof(long double));
    printf("El tamaño en memoria de un doble caracter es %d bytes\n", sizeof(char));
    printf("El tamaño en memoria de un booleano es %d bytes\n", sizeof(bool));
    printf("El tamaño en memoria de un void es %d bytes\n", sizeof(void));
    
    printf("El tamaño en memoria de un entero con signo es %d bytes\n", sizeof(signed int));
    printf("El tamaño en memoria de un entero sin signo es %d bytes\n", sizeof(unsigned int));
    
    /*printf("El tamaño en memoria de un flotante con signo es %d bytes\n", sizeof(unsigned double));
    printf("El tamaño en memoria de un flotante sin signo es %d bytes\n", sizeof(unsign));*/
    // Lo de arriba no es posible, no se pueden combinar//


    return 0;
}