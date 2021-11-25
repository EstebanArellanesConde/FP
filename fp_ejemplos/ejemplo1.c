/*
*   Buscar y escribir la primera vocal leída del teclado
*
*   Entrada : c : caracter
*   1. Inicio
*   2.  Repetir
*   3.      Leer c
*   4.  Hasta que c='a' o c='e' o c='i' o c='o' o c='u'
*   5.  Escribir "Primera vocal " , p
*   6. Fin
*/

#include <stdio.h>

int main() 
{
    char c;
    do
    {
        fflush(stdin);
        printf("Ingresa un caracter \n");
        scanf("%c", &c);
        getchar();
    } while (c!='a'&& c!='e' && c!='i' && c!='o' && c!='u' );
    
    printf("La primera vocal es: %c\n", &c);
    return 0;
}