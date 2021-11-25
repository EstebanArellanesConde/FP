#include "func_array.h"

void array_read(int a[], int n)
{
    for (int i = 0; i < n; i++){
        printf("Ingresa el valor del elemento %d:\n", i+1);
        scanf("%d", &a[i]);
    }
    printf("Se termino de leer el arreglo\n");
}

void array_print(int a[], int n)
{
    printf("[ ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("]\n");
}


void array_invert(int a[], int n){
    int temp;
    for (int i = 0, j = n-1; i<(n/2); i++, j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }    
    //array_print(a, n);
}

int array_max(int a[], int n){
    int max = a[0];
    for (int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("%d\n", max);
    return max;   
}

void array_read_ptr(int *a, int n)
{
    for (int i = 0; i < n; i++){
        printf("Ingresa el valor del elemento %d:\n", i+1);
        scanf("%d", (a+i));
    }
    printf("Se termino de leer el arreglo\n");
}

void array_print_ptr(int *a, int n)
{
    printf("[ ");
    for (int i = 0; i < n; i++){
        printf("%d ", *(a+i));
    }
    printf("]\n");
}