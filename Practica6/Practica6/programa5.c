#include <stdio.h>
/*
Este programa ilusta el uso del operador +=
*/
int main(){
    int x,y;
    x=6;
    printf("x=%d\n", x);
    y=4;
    printf("y=%d\n",y);
    x+=5;
    printf("x=%d\n",x);
    x+=y;
    printf("x=%d\n",x);
    return 0;

}