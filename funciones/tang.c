#include <stdio.h>
#include <math.h>

float tang(float x){
    float t;
    t = sinf(x)/cosf(x);
    return t;
}

float coseno(float g){
    return cos(g*2*M_PI/360);
}

float seno(float g){
    return sin(g*2*M_PI/360);
}

float tangente(float g){
    return tan(g*2*M_PI/360);
}