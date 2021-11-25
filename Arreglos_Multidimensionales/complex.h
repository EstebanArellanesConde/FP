#ifndef __COMPLEX_H__
#define __COMPLEX_H__

// complejo = float var [2];
float memoria[10][2];

void suma(float c1[2], float c2[2], float res[2]);
void resta(float c1[2], float c2[2], float res[2]);
void conjugado(float c1[2], float res[2]);
void multiplicación(float s, float c1[2], float res[2]);
void multiplicación(float c1[2], float c2[2], float res[2]);
void división(float c1[2], float c2[2], float res[2]);

void *suma_ptr(float *c1, float *c2);
void *resta_ptr(float *c1, float *c2);
void *conjugado_ptr(float *c1);
void *multiplicación_ptr(float *c1, float *c2);
void *multiplicación_ptr(float *c1, float *c2);
void *división_ptr(float *c1, float *c2);

#endif

