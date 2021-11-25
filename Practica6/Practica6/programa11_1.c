#include <stdio.h>
#define btoa(x) (x)? "true": "false"

int main()
{
    printf("%s\n", btoa(!(7>15)));
    printf("%s\n", btoa(!0));
    printf("%s\n", btoa((35>20) && (20<=23)));
    printf("%s\n", btoa(0 && 1));
    printf("%s\n", btoa((35>20) || (20<=18)));
    printf("%s\n", btoa(0 || 1));

    return 0;
}