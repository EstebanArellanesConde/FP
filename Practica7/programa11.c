#include <stdio.h>

//Este programa ilustra el uso del operador --, o decremento//

int main(){
    int x, y;
    x = 6;
    printf("x=%d\n", x);
    y = x--;
    printf("y=%d\n", y);
    printf("x=%d\n", x);

    return 0;

}