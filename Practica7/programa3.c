#include <stdio.h>
#include <stdbool.h>
#define btos(x) ((x)?"true":"false")  

int main(){
    int ent;
    long largo;
    float flotante;
    double doble;
    long double doblelargo;
    char car;
    signed int Sint;
    unsigned int _uint;
    short corto;
    bool b;

    ent = 14; largo = -2147483648;
    _uint = 65535;
    Sint = 32768;
    flotante = 3.4E+38f; //deben terminar en f o F//
    doble = 1.7e308;
    doblelargo = 1.7e308;
    car = 127; // car= "A" 
    corto = 12;
    b = true;

    printf(" Valor entero: %d\n", ent);
    printf(" Valor entero con signo: %i\n", Sint);
    printf(" Valor entero sin signo: %u\n", _uint);
    printf(" Valor entero sin signo en octal: %o\n", _uint);
    printf(" Valor entero sin signo en hexadecimal: %x\n", _uint);
    printf(" Valor entero; %ld\n", largo);
    printf(" Valor cadena: %s\n", "esto es una cadena");

    printf(" Valor entero: %d\n", corto);
    printf(" Valor entero con signo: %i\n", corto);
    printf(" Valor entero sin signo: %u\n", corto);
    printf(" Valor entero sin signo en octal: %o\n", corto);
    printf(" Valor entero sin signo en hexadecimal: %x\n", corto);

    printf(" Valor flotante: %lf\n", flotante);
    printf(" Valor flotante: %5.5f\n", flotante);
    printf(" Valor flotante: %5.2f\n", flotante);
    printf(" Valor flotante: %ef\n", flotante);
    printf(" Valor flotante: %g\n", flotante);

    printf(" Valor flotante: %lf\n", doble);
    printf(" Valor flotante: %5.5f\n", doble);
    printf(" Valor flotante: %5.2f\n", doble);
    printf(" Valor flotante: %ef\n", doble);
    printf(" Valor flotante: %g\n", doble);

    printf(" Valor flotante: %lf\n", doblelargo);
    printf(" Valor flotante: %5.5f\n", doblelargo); //de todos los decimales solo va a imprimir 5
    printf(" Valor flotante: %5.2f\n", doblelargo); //de todos los decimales solo va a imprimir 2
    printf(" Valor flotante: %ef\n", doblelargo); //representa como exponencial
    printf(" Valor flotante: %g\n", doblelargo); //representa como exponencial pero omitiendo los 0

    printf("Valor caracter: %c\n", car);
    printf("Valor caracter: %d\n", car);

    printf("Valor bool: %s\n", btos(b));
    printf("Valor bool: %d\n", b);
    return 0;
}