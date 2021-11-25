#include <stdio.h>
#include <math.h>

int main (int argc, char **argv)
{
    float radio, altura, area, volumen;
    printf("\nIngresa el valor del radio y altura: ");
    scanf("%f %f", &radio, &altura);

    area = 2*M_PI*radio*(radio + altura);
    volumen = M_PI*radio*radio*altura;
    printf("El valor del área es: %f\n", area);
    printf("El valor del volumen es: %f\n", volumen);
    return 0;
}