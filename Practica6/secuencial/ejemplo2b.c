#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (int argc, char **argv)
{
    float radio, altura, area, volumen;

    if (argc < 3)
    {
        printf("\nFaltan argumentos\n");
        exit(-1);
    }
    
    radio = atof(argv[1]);
    altura = atof(argv[2]);

    area = 2*M_PI*radio*(radio + altura);
    volumen = M_PI*radio*radio*altura;
    printf("El valor del área es: %f\n", area);
    printf("El valor del volumen es: %f\n", volumen);

    return 0;
}