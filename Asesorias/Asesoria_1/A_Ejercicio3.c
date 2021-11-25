/*
    Calcular el sen(x) utilizando la siguiente serie

    sen(x) = x - x^3/3! + x^5/5! - x^7/7! + ...

    La diferencia entre la serie y un nuevo término debe ser menor o igual a 0.001

    Entradas: 

*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int x, f=4;
    float senx;
    float term;
    float numerador;
    long denominador;
    bool neg = false;

    scanf("%d", &x);
    senx = x;
    numerador = x*x*x;
    denominador = 1*2*3;
    term = -numerador/denominador;
    while(fabs(senx-term)>0.001){
        numerador*=x;
        denominador *= f++;
        if(neg){
            term = -numerador/denominador;
            neg = false;
        }else{
            term = numerador/denominador;
            neg = true;
        }
        senx += term;
    }
    printf("El seno de %d es %f\n",x,senx);
    return 0;
}