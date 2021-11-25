#include <stdio.h>

int main() 
{
    float x, y;
    x = 25;
    printf("x=%f\n", x);
    y = 3;
    printf("y=%f\n", y);
    x /= 3;
    printf("x=%f\n", x);
    x /= y;
    printf("x=%f\n", x);
    return 0;
}
