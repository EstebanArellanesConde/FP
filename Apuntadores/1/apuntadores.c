#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
//#include<windows.h>

int main (){
    int a =0;
    int *p=NULL;

   //setlocale(LC_ALL, "spanish");
    //SetConsoleCP(1252);
    //SetConsoleOutputCP(1252);

    printf("La dirección de memoria de p %p\n", &p);
    printf("El tamaño de bytes del apuntador  %d\n", sizeof(int*));
    printf("La dirección de memoria apuntada %p\n", p);
    
    p= &a;

    printf("La dirección de memoria de p %p\n", &p);
    printf("La dirección de memoria de a %p\n", &a);
    printf("El tamaño de bytes del apuntador  %d\n", sizeof(int*));
    printf("La dirección de memoria apuntada %p\n", p);

    a=12;
    printf("El valor apuntado por p %d\n", *p);//imprime el valor almacenado a lo que está apuntando

    scanf ("%d",&a);//que almacene lo que va a leer en esa dirección de memoria

    return 0;

}