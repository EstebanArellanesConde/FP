#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5] = {10, 15, 12, 9, 5};
    int arry2[] = {1, 3, 4, 5, 6, 8, 9 , 10, 11};
    int j=0, k=3, z=6;
    printf("[ ");
    for (int i = 0; i < 5; i++){
        printf("%d ", array[1]);
    }
    printf("]\n");

    array[j] = array[j+1];
    array[k] = 5;
    array[z] = 100;
    return 0;
}
