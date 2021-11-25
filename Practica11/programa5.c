#include <stdio.h>

int main (int argc, char **argv) //*argv[] //char mat[] arc cuenta las cadenas almacenadas en **argv
// Es equivalente es un apuntador que guarda un doble arreglo de apuntadores puesto que no hay cadenas en lenguaje C
{
    if (argc < 2)
    {
        printf("El programa no contiene argumentos\n");
        return 88;
        //Al ejecutarse el programa tiene un problema de pasar el primer valor como referencia de la dirección donde se encuentra
    }
    
    printf("Los elementos del arreglo argv son:\n");
    for (int cont = 0 ; cont < argc ; cont++){
        printf("argv[%d] = %s\n", cont, argv[cont]);
    }

    return 88;
} 