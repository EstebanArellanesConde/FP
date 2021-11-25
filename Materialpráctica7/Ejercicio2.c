/*
2. Elaborar un algoritmo que determine si tres valores reales forman un triángulo. En caso de que si se forme un triángulo
determina si corresponde a un equilátero, isósceles o escaleno, además calcular el área del triángulo.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a=0, b=0, c=0, suma1=0, m=0, area=0.0;
    printf("Ingrese el valor del primer lado del triángulo: ");
    scanf("%f", &a);
    printf("Ingrese el valor del segundo lado del triángulo: ");
    scanf("%f", &b);
    printf("Ingrese el valor del tercer lado del triángulo: ");
    scanf("%f", &c);

    if (a > 0 && b > 0 && c > 0)
    {
        suma1 = a + b;   
        if (suma1 >= c)
        {
            if (a==b && a==c && b==c)
                printf("Es un triángulo Equilátero");        
            else if ( (a==b && a==c && b!=c) || (a==b && a!=c && b==c) || (a!=b && a==c && b==c) )
                printf("Es un triángulo Isósceles");        
            else if (a!=b && a!=c && b!=c)
                printf("Es un triángulo Escaleno");        

            m = ((int)(a+b+c)/2);
            area = sqrt((m)*(m-a)*(m-b)*(m-c));  // En este paso el valor de área sólo se imprime como 0.000000, no sabemos el porqué
            printf("\nSu área es: %f", &area); 
        }
        else
            printf("No es un triángulo");
    }
    else
    printf("No es un triángulo");
        
    return 0;
}

