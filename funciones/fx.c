#include <stdio.h>
#include <math.h>
#include "funciones.h" // Import java.lang.*

/*struct complex{
    float real;
    float img;
}*/


float f(float x){
    return(x/(1+x*x));
}

int main(){
    float a,b;
    int i;
    printf("Ingresa un valor para x\n");
    scanf("%f",&a);
    b = f(a);
    //c = f(a);
    printf ("El valor de f(%f) = %f\n", a,b);
    b = tan(a);
    printf ("El valor de tan(%f) = %f\n", a,b);
    /*for (int i = 0; i < 5; i++){
        printf("%d\n", i);
    }*/
    
    return 0;
}