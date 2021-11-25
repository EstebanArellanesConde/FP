#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main (){
    char *str = NULL;
    char c;

    str = &c;
    str =NULL;
    str = (char*)malloc(sizeof(char)); //se puede poner directo el valor que requiramos

    //str = "";
    strcpy(str,"");
    //str = str +h, no esta chido
    strcat(str, "h"); //si ponemos strcat(str, 'c'); esta mal porque es un caracter
    strcat(str, "o");
    strcat(str, "l");
    strcat(str, "a");
    strcat(str, " MUNDO");
    //https://www.cplusplus.com/reference/clibrary/ que cosas hay en c 
    printf("La cadena es: %s\n",str); //la funcion strcat cambia el tamaño de la memoria reservada
    printf("La longitud de la cadena es %d\n", strlen(str));
    free(str);
    str = NULL;
    
    return 0;
}