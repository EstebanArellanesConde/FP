/*
    Determinar la media de una lista de números positivos terminada con un número no positivo después
    del último número válido.

    Entradas: 
            n : número
    Salidas:
            media : real

    1. Inicio
    2.  Leer n
    3.  suma <- 0
    4.  num <- 0
    5.  Mientras que n >= 0 Hacer
    6.      suma <- suma + n
    7.      num <- num + 1
    8.      Leer n
    9.   FinMientras
    10.  media <- suma / num
    11.  Escribir media
    12. Fin
*/

#include <stdio.h>

int main()
{
    int n;
    float media;
    int suma = 0, num = 0;

    printf("Ingresa un número\n");
    scanf("%d", &n);
    while (n>=0)
    {
        suma += n;
        num++;
        printf("Ingresa un número\n");
        scanf("%d", &n);
    }
    media = (float)suma/num;
    printf("La media es: %f\n", media);
    return 0;
}