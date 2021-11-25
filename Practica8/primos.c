#include <stdio.h>

int main(){
    int i, num, cont =0 ;
    printf("ingrese el número\n");
    scanf("%i",& num);
    for (i=1; i<=num;i++)
    {
        if(num %i ==0){
            cont ++;
        }
    }
    if (cont >2 )
    {
        printf("No es primo\n");
    }else{
        printf("Es primo\n");
    }
    return 0;
}