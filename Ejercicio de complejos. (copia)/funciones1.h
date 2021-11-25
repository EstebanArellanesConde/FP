#ifndef __COMPLEX_H__
#define __COMPLEX_H__

void memory_for_complex(float*Complex);
void read_complex(float a[2]);
void read_complex_ptr(float *a);
void print_complex(float a[2]);
void print_complex_ptr(float *a);

void suma(float c1[2], float c2[2], float res[2]);
void resta(float c1[2], float c2[2], float res[2]);
void conjugado(float c1[2], float res[2]);
void escalar_multi(float s, float c1[2], float res[2]);
void multi(float c1[2], float c2[2], float res[2]);
void division(float c1[2], float c2[2], float res[2]);

float *suma_ptr(float *c1, float *c2);
float *resta_ptr(float *c1, float *c2);
float *conjugado_ptr(float *c1);
float *escalar_multi_ptr(float *c1, int s);
float *multi_ptr(float *c1, float *c2);
float *division_ptr(float *c1, float *c2);
#endif 