#include"funciones1.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float* Z1=NULL;
    float* Z2=NULL;
    float* Z3=NULL;
    float c1[2],c2[2],c3[2];
    Z1=(float*)malloc(2*sizeof(float));
    Z2=(float*)malloc(2*sizeof(float));
    Z3=(float*)malloc(2*sizeof(float));
    read_complex(c1);
    read_complex(c2);
    suma(c1,c2,c3);
    print_complex(c3);
    resta(c1,c2,c3);
    print_complex(c3);
    conjugado(c1,c3);
    print_complex(c3);
    escalar_multi(-2,c1,c3);
    print_complex(c3);
    multi(c1,c2,c3);
    print_complex(c3);
    division(c1,c2,c3);
    print_complex(c3);
    read_complex(Z1);
    read_complex(Z2);
    Z3=suma_ptr(Z1,Z2);
    print_complex(Z3);
    Z3=resta_ptr(Z1,Z2);
    print_complex(Z3);
    Z3=conjugado_ptr(Z1);
    print_complex(Z3);
    Z3=escalar_multi_ptr(Z1,-2);
    print_complex(Z3);
    Z3=multi_ptr(Z1,Z2);
    print_complex(Z3);
    Z3=division_ptr(Z1,Z2);
    print_complex(Z3);
    free(Z1);
    free(Z2);
    free(Z3);
    return 0;
}
