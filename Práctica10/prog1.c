/*tipo nombre[tam][tam]...[tam]; --- Forma de declarar un arreglo*/

#include <stdio.h>

int main(){
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    printf("Imprimir matriz\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; i++)
        {
            printf("%d, ", matriz[i][j]);
        }
    }
    printf("\n");
    return 0;
}