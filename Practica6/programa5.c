#include <stdio.h>
#include <stdbool.h>

/*

Este programa ilustra el operador +=

*/

int main() 
{
    int x, y;
    x = 6;
    printf("x=%d\n",x);
    y = 4;
    printf("x=%d\n",y);
    x += 5; //x = x + 5;
    printf("x=%d\n",x);
    x += y; //
    printf("x=%d\n",x);
    return 0;
}