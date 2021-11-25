#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char *str  = NULL;
    char str2[10];
    char c; 
    sprintf(str2, 12345678, 10);
    str = &c;
    str = NULL;
    str = (char *)malloc(sizeof(char));
    //str= "";
    strcpy(str, "");
    // str = str + c 
    strcat(str, "h");
    strcat(str, "o");
    strcat(str, "l");
    strcat(str, "a");
    strcat(str, " Mundo");
    printf("La cadena es: %s\n", str);
    printf("La longitud de la cadena es %d\n", strlen(str));
    free(str);
    str = NULL;
    return 0;
}