#include <stdio.h>

int main ()

{
    int a, b, c, d;
    scan("%d %d %d %d", &a, &b, &c, &d );
    printf("%d %d %d %d\n", d, c , b, a);
    return 0;
}