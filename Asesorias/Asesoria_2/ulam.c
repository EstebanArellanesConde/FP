#include <stdio.h>

void ulam(int n){
    printf("%d, ", n);
    while(n > 1){
        if(n%2==0) n /= 2;
        else n = n*3 +1;
        printf("%d, ", n);
    }
}