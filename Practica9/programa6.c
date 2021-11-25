#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr_array = &array;
    int *ptr_array2 = &array[2];

    for (int i = 0; i < 5; i++){
        printf("%d ", ptr_array[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++){
        printf("%d ", *(ptr_array2+i));
    }
    printf("\n");
    printf("%p\n", &ptr_array2); //Dirección del apuntador
    printf("%p\n", ptr_array2); //Contenido del apuntador
    printf("%p\n", &array[2]); //Contenido de la dirección apuntada

    printf("%p\n", *ptr_array2); //Contenido de la dirección apuntada
    printf("%p\n", ptr_array2[0]); //Contenido de la dirección apuntada
    printf("\n");
    return 0;
}