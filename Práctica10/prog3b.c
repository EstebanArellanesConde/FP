/*tipo nombre[tam][tam]...[tam]; --- Forma de declarar un arreglo*/

#include <stdio.h>

int main(){
    int matriz[5][5];
    int i,j;
    printf("Imprimir matriz\n");
    i=0;
    do 
    {
        j=0;
        do 
        {
            matriz[i][j] = i+j;
            printf("%d, ", matriz[i][j]);
            j++;
        } while (j<5);
    printf("\n");       
    i++;
    } while (i<5);
    return 0;
}