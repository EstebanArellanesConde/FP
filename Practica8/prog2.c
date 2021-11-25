#include <stdio.h>
#include <stdbool.h>

int main()
{
    /* Al igual que en la estructura if-else, 0 -> falso y diferente de 0 -> verdadero.
El siguiente es un ciclo infinito porque la condición siempre es verdadera.
Así mismo, debido a que el ciclo consta de una sola línea, las llaves { } son
opcionales.*/

    while (false)
    {
        printf("Ciclo infinito.\nPara terminar el ciclo presione ctrl + c.\n");
    }
}