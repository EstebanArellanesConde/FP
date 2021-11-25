#include <stdio.h>
#include "ecuaciones.h"

int main ()
{
    float a, b, c;
    printf("Ingresa el valor de los coeficientes\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a==0){
        lineal(b,c);
    }else{
        cuadratica(a, b, c);
    }
    
    return 0;
}