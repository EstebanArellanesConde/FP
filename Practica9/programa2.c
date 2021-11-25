#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamA;
    printf("¿Cúantos elementos forman el arreglo?\n");
    scanf("%d", &tamA);
    int array[tamA];
    for (int i = 0; i < tamA; i++){
        printf("Ingresa el valor para el elemento %d\n", i);
        scanf("%d", &array[i]);
    }
    printf("[ ");
    for (int i = 0; i < tamA; i++){
        printf("%d ", array[i]);
    }
    printf("]\n");
    return 0;
}
