#include <stdio.h>
#define btoa(x) (x)? "true": "false"

int main(){
    printf("%s\n", btoa('h'=='p'));
    printf("%s\n", btoa('a'!='p'));
    printf("%s\n", btoa(7<15));
    printf("%s\n", btoa(22>11));
    printf("%s\n", btoa(15<=2));
    printf("%s\n", btoa(35>=20));
    printf("%s\n", btoa((7>8) > (9>6)));

    return 0;
}