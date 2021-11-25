/*
*   Se dspone de una lista de N números. Se desea calcular el valor del número mayor
*
*   Entradas:
*        i : entero
*        n : entero
*   Salidas: 
*        max: entero 
*
*   1. Inicio
*   2. Leer n
*   3. Leer num
*   4. max <- num
*   5. Desde i <- 2 Hasta n Con Paso 1 Hacer
*   6.      Leer num
*   7.      Si  num > max Entonces 
*   8.      max <- num
*   8.      FinSi
*   9.   FinDesde
*   10. Fin
*/

#include <stdio.h>

int main() 
{
    int i, n, num, max;

    printf("Ingresa la longitud de la lista: \n");
    scanf("%d", &n);
    printf("Ingresa el primer valor: \n");
    scanf("%d", &num);
    max = num;
    for (i = 2; i <= n; i++)
    {
        printf("Ingresa el siguiente valor: \n");
        scanf("%d", &num);
        if (num > max)
            max = num;
    }
    printf("El valor máximo es %d\n", max);
    return 0;
}