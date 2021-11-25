/*
1. Elaborar un algoritmo que de solución a la siguiente función
        __
        |    y^3             Si y  mod 4 = 0
        |
        |    (y^2 -14)/y^3  Si y mod 4 = 1
f(y) =  |
        |    y^3+5           Si y mod 4 = 2
        |
        |_    sqrt(y)         Si y mod 4 = 3
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, c, y;
    float  b;
    printf("\nEl algoritmo da solución a la siguiente función \"f(y)\" si: ");
    printf("\n1. f(y) = y^3 si mod(y/4) = 0");
    printf("\n2. f(y) = (y^2 - 14)/y^3 si mod(y/4) = 1 ");
    printf("\n3. f(y) = (y^3)+5) si mod(y/4) = 2 ");
    printf("\n4. f(y) = sqrt(y) si mod(y/4) = 3");
    printf("\nIngrese en que funcion quiere evaluar a f(y): ");
    scanf("%i", &a);
    
    //f(y) = a

    switch (a)
    {
        case 1:
            printf("\nIngrese en que valor quiere evaluar a f(y): ");
            scanf("%i", &y);
            b = (y%4);

            if (b == 0)
            {
                a = (y^3);
                printf("\nEl valor en f(y) es: %i", a);
            }
            else
                printf("\nNo existe valor en f(y)");
            break;
        
        case 2:
            printf("\nIngrese en que valor quiere evaluar a f(y): ");
            scanf("%i", &y);
            b = (y%4);

            if (b == 1)
            {
                a = ((y^2 - 14)/(y^3));
                printf("\nEl valor en f(y) es: %i", a);
            }
            else
                printf("\nNo existe valor en f(y)");
            break;

        case 3:
            printf("\nIngrese en que valor quiere evaluar a f(y): ");
            scanf("%i", &y);
            b = (y%4);

            if (b == 2)
            {
                a = ((y^3)+5);
                printf("\nEl valor en f(y) es: %i", a);
            }
            else
                printf("\nNo existe valor en f(y)");
            break;
        
        case 4:
            printf("\nIngrese en que valor quiere evaluar a f(y): ");
            scanf("%i", &y);
            b = (y%4);

            if (b == 3)
            {
                a = (sqrt(y));
                printf("\nEl valor en f(y) es: %i", a);
            }
            else
                printf("\nNo existe valor en f(y)");
            break;

    default:
        printf("\nNo se puede evaluar en f(y)");
        break;
    }

    return 0;
}

