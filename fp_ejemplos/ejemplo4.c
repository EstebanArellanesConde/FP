/*
*   Se desea leer las calificaciones de una clase de fundamentos de programación 
*   y contar el número total de aprobados (6 o mayor que 6)
*
*   Entradas: cal: real, n: entero, cantidad de calificaciones
*   Salidas: num: entero, el número de aprobados 
*
*   1. Inicio
*   2.  Leer n
*   3.  Repetir
*   4.      Leer cal
*   5.      Si cal >=6 Entonces
*   6.          num <- num + 1
*   7.      FinSi
*   8.      i <- i+1
*   9.   Hasta que i = n   
*   10.   Escribir "El número de aprobados es ", num
*   11. Fin
*/

#include <stdio.h>

int main() 
{
    float cal;
    int i, n, num=0;

    printf("Ingresa el número de calificaciones\n");
    scanf("%d", &n);
    i = 0;
    do
    { 
        printf("Ingresa calificacion\n");
        scanf("%f", &cal);    
        if (cal >= 6.0) num++;
        i++;        
    } while (i< n);
    printf("El número total de aprobados es %d\n", num);    
    return 0;
}