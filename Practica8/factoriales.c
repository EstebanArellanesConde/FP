#include <stdio.h>
int main(){
    int n, cont, fac;
    printf("Cálculo de factoriales \n");
    printf("Ingrese un numero \n");
    scanf("%d" , &n);
    fac = 1;
    cont = 1;
    do{
        fac = fac * cont;
        cont = cont + 1;
    }while(cont < n + 1);
printf("El factorial de ");
printf("%d" , n);
printf(" es ");
printf("%d" , fac);
return 0;
}