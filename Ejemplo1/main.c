// Inclusión de bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Variables globales
int x;
float f;
double d;
char c;
const int X = 3;

//Funciones
int suma(int a, int b){
    int c; //Variables locales
    c = a + b;
    return c;//Instrucción de retorno
}


/*
 * Esto es un comentario que se extiende
 * por varias líneas
 * Función principal
 */
int main(int argc, char *argv[]){
    int z;
    z = suma(3, 15); // Llamada a una función
    printf("%d\n", z); //Instrucciones de escritura
    scanf("%d", &z); //Instrucciones de lectura
    printf("%d\n", z); //Instrucciones de escritura

    if( z != 8){ // Estructura de selección simple
        z= z+10;
    }

    // Estructura de selección doble
    if( z==3){

    }else{

    }
    //Estructura de selección múltiple
    switch(z+4){
        case 19:
            z = z+1;
            break; // Instrucción de ruptura
        case 20:
            z = z+2;
            break;
        default:
            z= 0;
            break;
    }
    //Estructura cíclica mientras
    z=3;
    while(z>2 && z!= 4){
        z= z+1;
    }

    // Estructura cíclica hacer-mientras
    do{
        z = z+1;
    }while(z<1000);

    // Estructura cíclica para ó desde
    for(z=1; z<15; z=z+10){

    }
    return 0;//Instrucción de retorno
}

