#include <stdio.h>

//Este programa ilustra el uso del operador *=//

int main(){
    int x, y;
    x = 5;
    printf("x=%i\n", x);
    y = 3;
    printf("x=%i\n", y);
    x *= 4; // x = x -3
    printf("x=%i\n", x);
    x *= y;
    printf("x=%i\n", x);
    return 0;

}