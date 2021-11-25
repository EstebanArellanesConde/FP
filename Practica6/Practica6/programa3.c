#include <stdio.h>
#include <stdbool.h>
#define btos(x) ((x)?"true":"false")

int main(){
    int ent;
    long largo;
    short corto;
    float flotante;
    double doble;
    long double dobleLargo;
    char car;
    signed int sInt;
    unsigned int uInt;
    bool b;
    
    ent= 14; 
    largo = -2147483648; 
    uInt = 65535;
    sInt = -32768;
    flotante = 3.4E+38f;
    doble = 1.7e308;
    dobleLargo = 1.7e308;
    car =127; //'car'
    corto = 12;
    b=  true;
    printf("Valor entero: %d\n", ent);
    printf("Valor entero con signo: %i\n", sInt);
    printf("Valor entero sin signo: %u\n", uInt);
    printf("Valor entero sin signo en octal: %o\n", uInt);
    printf("Valor entero sin signo en hexadecimal: %x\n", uInt);
    printf("Valor entero largo: %ld\n", largo);
    printf("Valor cadena: %s\n", "esto es una cadena");

    printf("Valor entero: %d\n", corto);
    printf("Valor entero con signo: %i\n", corto);
    printf("Valor entero sin signo: %u\n", corto);
    printf("Valor entero sin signo en octal: %o\n", corto);
    printf("Valor entero sin signo en hexadecimal: %x\n", corto);

    printf("Valor flotante: %f\n", flotante);
    printf("Valor flotante: %5.5f\n", flotante);
    printf("Valor flotante: %5.2f\n", flotante);
    printf("Valor flotante: %3.1ef\n", flotante);
    printf("Valor flotante: %g\n", flotante);

    printf("Valor flotante: %lf\n", doble);
    printf("Valor flotante: %5.5f\n", doble);
    printf("Valor flotante: %5.1f\n", doble);
    printf("Valor flotante: %4.3ef\n", doble);
    printf("Valor flotante: %g\n", doble);

    printf("Valor flotante: %lf\n", dobleLargo);
    printf("Valor flotante: %5.5f\n", dobleLargo);
    printf("Valor flotante: %5.2f\n", dobleLargo);
    printf("Valor flotante: %ef\n", dobleLargo);
    printf("Valor flotante: %g\n", dobleLargo);

    printf("Valor caracter: %c\n", car);
    printf("Valor caracter: %d\n", car);

    printf("Valor bool: %s\n", ((b)?"true":"false"));
    printf("Valor bool: %d\n", b);
}