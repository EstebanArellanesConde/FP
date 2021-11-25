#include <stdio.h>

int resultado;

int main()
{
    multiplicar();
    printf("%i", resultado);
    return 0;
}

void multiplicar(){ 
    resultado = 5*4;    
    return; //Las funciones void pueden tener instucciones de un return pero no retorna
}

