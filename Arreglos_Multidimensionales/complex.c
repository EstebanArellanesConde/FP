#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

float complex_memory[10][2];
float *complex_dynamic_memory[2];// float **complex_dynamic_memory
float countMemory;

float* complex_add(float c[2], float c2[2]);
float* complex_sub(float c[2], float c2[2]);
float* complex_con(float c[2]);
float* complex_mul_scalar(float s, float c[2]);
float* complex_mul(float c[2], float c2[2]);
void complex_div(float c[2]);
void complex_print(float c[2]);

#endif