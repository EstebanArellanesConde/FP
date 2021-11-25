#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamA;
    int *ptr_array;
    printf("¿Cuántos elementos tendrá el arreglo\n");
    scanf("%d", &tamA);
    ptr_array = (int *)malloc(tamA * sizeof(int));
    for (int i = 0; i < tamA; i++){
        printf("Ingresa el valor para el elmento %d\n", i);
        scanf("%d", &ptr_array[i]);
    }
    printf("[ ");
    for (int i = 0; i < tamA; i++){
        printf("%d ", *(ptr_array+1));
    }
    printf("]\n");
    free(ptr_array);
    ptr_array = NULL;
    return 0;
}
