/*tipo nombre[tam][tam]...[tam]; --- Forma de declarar un arreglo*/

#include <stdio.h>

int main(){
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    printf("Imprimir matriz\n");
    i=0;
    do
    {
        j=0;
        do
        {
            printf("%d, ", matriz[i][j]);
            j++;
        } while (j<3);
        printf("\n"); 
        i++;
    } while (i<3);

return 0;
}