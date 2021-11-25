#include <stdio.h>
#include <stdlib.h>
int var=0;
float memoria[10][2];
/* void copy_into_memory(float a[10][2], float*b){
    for (int i = 0; i < 2; i++)
    {
        a[var][i]=b[i];
    }
    var++;
    if (var==10)
    {
        char c;
        printf("YA NO QUEDA MEMORIA, ¿desea sobrescribir? S/N\n");
        printf("Se borrara el dato mas antiguo calculado y los demas seran dezplazados\n");
        scanf("%c",&c);
        switch (c)
        {
        case 'N':
        case 'n':
        printf("Ha selcinado NO\n");
            break;
        case 'S':
        case 's':
        for (int k = 0; k < 9; k++)
        {
            for (int l = 0; l < 2; l++)
            {
                a[k][l]=a[k+1][l];
            }
        }
        for (int i = 0; i < 2; i++)
        {
            a[9][i]=b[i];
        }
            break;
        default:
            break;
        }
    }
    
} */
void print_complex(float a[2])
{
    printf("%.3f", a[0]);
    printf(" %.3fi\n", a[1]);
}
/*void print_complex_ptr(float *a){
    printf("%.3f",*a);
    printf("%.3f",*(a+1));
}*/

/*void read_complex_ptr(float *a){
    printf("Ingresa el valor real:");
    scanf("%f",a);
    printf("Ingresa el valor imaginario:");
    scanf("%f",(a+1));
}*/

void read_complex(float a[2])
{
    printf("Ingresa el valor real:");
    scanf("%f", &a[0]);
    printf("Ingresa el valor imaginario:");
    scanf("%f", &a[1]);
}

void suma(float c1[2], float c2[2], float res[2])
{
    for (int i = 0; i < 2; i++)
    {
        res[i] = c1[i] + c2[i];
    }
}

void resta(float c1[2], float c2[2], float res[2])
{
    for (int i = 0; i < 2; i++)
    {
        res[i] = c1[i] - c2[i];
    }
}

void conjugado(float c1[2], float res[2])
{
    res[1] = (-1) * c1[1];
    res[0] = c1[0];
}

void escalar_multi(float s, float c1[2], float res[2])
{
    for (int i = 0; i < 2; i++)
    {
        res[i] = s * c1[i];
    }
}

void multi(float c1[2], float c2[2], float res[2])
{
    res[0] = (c1[0] * c2[0]) - (c1[1] * c2[1]);
    res[1] = (c1[0] * c2[1]) + (c1[1] * c2[0]);
}

void division(float c1[2], float c2[2], float res[2])
{
    res[0] = ((c1[0] * c2[0]) + (c1[1] * c2[1])) / (c2[0] * c2[0] + c2[1] * c2[1]);
    res[1] = (((-1) * c1[0] * c2[1]) + (c1[1] * c2[0])) / (c2[0] * c2[0] + c2[1] * c2[1]);
}

float *suma_ptr(float *c1, float *c2)
{
    float *c3=NULL;
    c3 = (float *)malloc(2 * sizeof(float));
    for (int i = 0; i < 2; i++)
    {
        c3[i] = c1[i] + c2[i];
    }
    return c3;
}

float *resta_ptr(float *c1, float *c2)
{
    float *c3=NULL;
    c3 = (float *)malloc(2 * sizeof(float));
    for (int i = 0; i < 2; i++)
    {
        c3[i] = c1[i] - c2[i];
    }
    return c3;
}

float *conjugado_ptr(float *c1){
    float *auxi;
    auxi=(float*)malloc(2*sizeof(float));
    auxi[0]=c1[0];
    auxi[1]=-c1[1];
    return auxi;
}

float *escalar_multi_ptr(float *c1, int s){
    float *auxi;
    auxi=(float*)malloc(2*sizeof(float));
    for (int i = 0; i < 2; i++)
    {
        auxi[i]=s*c1[i];
    }
    return auxi;
}

float *multi_ptr(float *c1, float *c2){
    float *auxi;
    auxi=(float*)malloc(2*sizeof(float));
    auxi[0] = (c1[0] * c2[0]) - (c1[1] * c2[1]);
    auxi[1] = (c1[0] * c2[1]) + (c1[1] * c2[0]);
    return auxi;
}

float *division_ptr(float *c1, float *c2){
    float *auxi;
    auxi=(float*)malloc(2*sizeof(float));
    auxi[0] = ((c1[0] * c2[0]) + (c1[1] * c2[1])) / (c2[0] * c2[0] + c2[1] * c2[1]);
    auxi[1] = (((-1) * c1[0] * c2[1]) + (c1[1] * c2[0])) / (c2[0] * c2[0] + c2[1] * c2[1]);
    return auxi;
}

