#include <stdio.h>

int main()
{
	int n, suma = 0;

	printf("Ingrese un número n entero positivo para calcular la suma de sus n numeros: "); 
    scanf("%i", &n);
	
	for(int i = 1; i <= n; i++)
    { 
		suma += i;
	}	
	printf("\nLa suma es: %i", suma);
	return 0;
}