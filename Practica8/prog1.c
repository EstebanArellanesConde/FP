#include <stdio.h>
int main()
{
    int num, cont;
    printf("\a----- Tabla de multiplicar -----\n");
    printf("Ingrese un número: \n");
    scanf("%d", &num);
    printf("La tabla de multiplicar del %d es:\n", num);
    cont = 1;
    while (cont <= 10){
        printf("%d x %d = %d\n", num, cont, num * cont);
        if(cont == 5)
            break;
        cont ++;
    }
    return 0;
}