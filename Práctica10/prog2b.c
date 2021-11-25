/*tipo nombre[tam][tam]...[tam]; --- Forma de declarar un arreglo*/

#include <stdio.h>

int main(){
    int matriz[3][3];
    int i,j;
    printf("Imprimir matriz\n");
    i=0;
    while (i<3)
    {
        j=0;
        while (j<3)
        {
            matriz[i][j] = i+j;
            printf("%d, ", matriz[i][j]);
            j++;
        }
    printf("\n");       
    i++;
    }
    return 0;
}