//Operadores relacionales y logicos//
#include <stdio.h>
#define btoa(x) (x)? "true": "false" //btoa(x) se va a volver esto: (x)? "true": "false"

int main()
{
    printf("%s \n",btoa(!(7 > 15 )));
    printf("%s \n",btoa(!0));
    printf("%s \n", btoa((35>20)&&(20<=23))); // and o "y" conjuncion
    printf("%s \n", btoa(0 && 1));
    printf("%s \n", btoa((35>20)&&(20<=18)));
    printf("%s \n", btoa(0 || 1)); //or u o
    return 0;
}