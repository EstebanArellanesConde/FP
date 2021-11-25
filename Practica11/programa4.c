#include <stdio.h>
#include <stdio.h>

//Este programa ejemplifica el uso de funciones globales y locales
void incremento();

int enteraGlobal;

int main()
{
    int cont;
    enteraGlobal = 0;
    for (cont = 0; cont < 5; cont++)
        incremento();
    return 999;
}

void incremento()
{
    int enteraLocal = 5;
    enteraGlobal += 2;
    printf("global(%i) + local(%i) = %d\n", 
    enteraGlobal, enteraLocal, enteraGlobal + enteraLocal);
    return;
}