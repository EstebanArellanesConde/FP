/*
* ax + b = 0
* a != 0            x = -b/a
* a = 0 b != 0    entonces solución imposible
* a = 0 b = 0     entonces solución indeterminada
*/

#include <stdio.h>

int main ()
{
    float a, b, x;
    printf("Ingrese los valores de a y b\n");
    scanf("%f %f", &a, &b);
    if (a!=0)
    {
        x = -b/a;
        printf("El valor de x es: %f\n", x);
    }else if(b!=0)
    {
        printf("Solución imposible");
    }
    else
    {
        printf("Solución indeterminada");
    }
    
    return 0;
}