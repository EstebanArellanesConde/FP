#include <stdio.h>
#include <string.h>

void imprimir(char[]);

int main(){
    char nombre[]="Facultad de Ingeniería";//{'F', 'a','c', ......};
    imprimir(nombre);
    return 0;
}

void imprimir(char s[]){
    int tam;
    for (tam = strlen(s)-1; tam >= 0 ; tam--){ /*Como el ciclo va en decremento recorre a la función en orden inverso. Strlen jamás va a contar el carácter de final de cadena*/
        printf("%c", s[tam]);
        printf("\n");
    }
    
}