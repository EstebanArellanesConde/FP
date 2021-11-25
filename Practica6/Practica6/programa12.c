#include <stdio.h>

int main (){
    int x, y, v, z;
    x = (v=3, v*5);
    printf("x=%d, v=%d\n", x,v);
    x= (v+=5, v%3);
    printf("x=%d, v=%d\n", x,v);
    x = (y=(15>10), z=(2>=y), y && z);
    printf("x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}