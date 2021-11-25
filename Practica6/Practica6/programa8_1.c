#include <stdio.h>

#include <stdio.h>

int main(){
    float x, y;
    x=5;
    printf("x=%f\n",x);
    y=3;
    printf("y=%f\n", y);
    y *=4;
    printf("x=%f\n", x);
    x *= y;
    printf("x=%f\n", x);
    return 0;
}