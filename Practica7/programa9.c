#include <stdio.h>

//Este programa ilustra el uso del operador ++, o postincremento//

int main(){
    int x, y;
    x = 7;
    printf("x=%d\n", x);
    y = x++;
    printf("y=%d\n", y);
    printf("x=%d\n", x);

    return 0;

}