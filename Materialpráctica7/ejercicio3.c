/*
3. Elaborar un algoritmo que a partir de un número de 4 dígitos, determine si todos los dígitos que componen al número son pares.
    Consideraciones
    -El número en la entrada no debe ser una cadena sino un entero
    -El número se tiene que separar por dígitos utilizando la división entera y la operación de módulo
*/

#include<stdio.h>

int main()
{
    int num, digito, digito1, digito2, res1, res2, res3;
    printf("Ingrese un número de 4 digitos: \n");
    scanf("%d",&num);

    if (num >= 1000 && num <= 9999)
    {
        digito = (int)num/10; 
        res1 = num%10;

        digito1 = (int)digito/10;
        res2 = digito%10;

        digito2 = (int)digito1/10;
        res3 = digito1%10;

        printf("Los números son: %d, %d, %d, %d\n",digito2,res3,res2,res1); 

        if((digito2%2) != 0 || (res3%2) != 0 || res2%2 != 0 || res1%2 !=0)
        {
            printf("Alguno de los dígitos del número ingresado no es par");
        }
        else
        {
            printf("Los dígitos del número ingresado son pares");
        }
            
    }
    else
        printf("El número ingresado \"%i\" no tiene 4 digitos", &num);
    return 0;
}
