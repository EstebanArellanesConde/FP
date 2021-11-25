#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];
    printf("La dirección del arreglo : %p\n", &array);

    for (int i = 0; i < 5; i++){
        printf("La dirección del elemento %d del arreglo : %p\n", &i, &array[i]);
    }
    
    return 0;
}
