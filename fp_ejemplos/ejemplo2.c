/*
*   Escribir un algoritmo que permita escribir en pantalla la frase "¿desea continuar? S/N"
*   hasta que la respuesta sea S o N
*
*   Entrada : r : caracter
*
*   1. Inicio
*   2.  Repetir
*   3.      Escribir "¿Desea continuar? S/N"
*   4.      Leer r
*   5.  Hasta que r='S' o r='N'
*   6. Fin
*/

#include <stdio.h>

int main() 
{
    char r;
    do
    {
        printf("¿Desea continuar? S/N\n");
        scanf("%c", &r);
        getchar();
    } while (r!='S'&&r!='N');
    return 0;
}