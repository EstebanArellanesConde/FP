#include <stdio.h>
int main()
{
    // Los valores de una enumeración son enteros y constantes
    enum diasSemana
    {
        LUNES,
        MARTES,
        MIERCOLES,
        JUEVES,
        VIERNES,
        SABADO,
        DOMINGO
    };
    int op;
    printf("Ingrese el día de la semana.\n");
    printf("1) Lunes\n");
    printf("2) Martes\n");
    printf("3) Miércoles\n");
    printf("4) Jueves\n");
    printf("5) Viernes\n");
    printf("6) Sábado\n");
    printf("7) Domingo\n");
    scanf("%d", &op);
    switch (op - 1)
    {
    case LUNES:
    case MARTES:
        printf("Inicio de semana.\n");
        break;
    case MIERCOLES:
        printf("Mitad de semana.\n");
        break;
    case JUEVES:
        printf("¡Casi inicia el fin de semana!\n");
        break;
    case VIERNES:
    case SABADO:
        printf("¡Fin de semana!\n");
        break;
    case DOMINGO:
        printf("Día de descanso.\n");
        break;
        // No se necesita default
    }

    return 0; // Valor entero en hexadecimal
}