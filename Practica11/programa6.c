#include <stdio.h>

void funcion();

int main(){
    for (int j = 0; j < 5; j++){
        funcion();
    }
}

void funcion()
{
    static int veces = 0; 
    int num = 0;
    printf("Valor de la variable local  %d \n", ++num);
    printf("Esta función se ha llamado %d veces.\n", ++veces);
} 