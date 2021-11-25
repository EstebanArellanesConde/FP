#include <stdio.h>
int main()
{
    int uno, dos, tres;
    printf("Ingrese 3 números separados por espacios:\n");
    scanf("%d %d %d", &uno, &dos, &tres);
    if (uno > dos)
    {
        if (dos > tres)
        {
            printf("%d es mayor a %d que es mayor a %d\n", uno, dos, tres);
        }
        else
        {
            if (uno > tres)
            {
                printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos);
            }
            else
            {
                printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos);
            }
        }
    }
    else
    {
        if (dos > tres)
        {
            if (tres > uno)
            {
                printf("%d es mayor a %d que es mayor a %d\n", dos, tres, uno);
            }
            else
            {
                printf("%d es mayor a %d que es mayor a %d\n", dos, uno, tres);
            }
        }
        else
        {
            printf("%d es mayor a %d que es mayor a %d\n", tres, dos, uno);
        }
    }
    return 0;
}