#include <stdio.h>

void sumar(); //El prototipo de declararse antes de la función main
//Todos los prototipos son globales
int main()
{
    sumar();
    return 0;    
}
//Este programa ejemplifica la declaración de variables dentro de funciones
void sumar()
{
    int x = 5, y = 10;
    int z;
    z = x + y;
    printf("%i", z); //No se puede declarar una función dentro de otra
}