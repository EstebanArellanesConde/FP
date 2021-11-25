/*
tipo *nombre;
nombre = &var;
nombre = (tipo*)malloc(sizeof(tipo));
*/

#include <stdio.h>

int main(){
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, cont = 0, *ptr;
    ptr = *matriz; // ap = &matriz[0][0]
    printf("Imprimiendo matriz\n");
    for (i = 0; i < 9; i++)
    {
        if(cont == 3)
        {
            printf("\n");
            cont = 0;
        }
        printf("%d, ", *(ptr+i));
        cont ++;
    }
    printf("\n");
    return 0;
}