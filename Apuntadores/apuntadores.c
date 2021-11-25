#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*#ifdef WINDOWS
#include <windows.h>
#endif*/

int main ()
{
    int a = 0;
    int *p = NULL;

    SetLocale(LC_ALL, "Spanish");
    /*#ifdef WINDOWS
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    #endif*/

    a = 12;

    printf("La dirección de memoria de p %p\n", &p); 
    printf("El tamaño de bytes del apuntador %d\n", sizeof(int*));
    printf("La dirección de memoria apuntada %p\n", p);

    p = &a; 

    printf("La dirección de memoria de p %p\n", &p); 
    printf("La dirección de memoria de a %p\n", &a); 
    printf("El tamaño de bytes del apuntador %d\n", sizeof(int*));
    printf("La dirección de memoria apuntada %p\n", p);


    printf("El valor apuntado  por p %d\n", *p);

    scanf("%d", &a);

    return 0; 
}