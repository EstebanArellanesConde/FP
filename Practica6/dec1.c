#include <stdio.h>

int main() 
{
    int x, y;
    x = 6;
    printf("x=%d\n", x);
    y = x--;
    printf("x=%d\n", y);
    printf("x=%d\n", x);
    return 0;
}