#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "funciones.h"

void menu();
//    ARGV0  ARGV1 ARGV2  ARGV3  ARGV4 
// ./complex -in entrada.txt -out salida.txt
// ./complex -out salida.txt -in entrada.txt
// ./complex -in entrada.txt
// ./complex -out salida.txt
int main(int argc, char *argv[]){
    if (argc == 5){
        if (strcmp(argv[1], "-in")==0){
            open_in_file(argv[1]);
        }else if(strcmp(argv[1], "-out")==0){
            open_out_file(argv[2]);
        }
        if (strcmp(argv[3], "-in")==0){
            open_in_file(argv[4]);
        }else if (strcmp(argv[3], "-out")==0){
            open_out_file(argv[4]);
        }
    }else if (argc == 3){
        if (strcmp(argv[1], "-in")==0){
            open_in_file(argv[1]);
        }else if(strcmp(argv[1], "-out")==0){
            open_out_file(argv[2]);
        }
        int op;
        while (true){
            menu();
            scanf("%d", &op);
            switch (op){
                    case 1:
                        complex_scan(c);
                        memory_write(c);
                    break;
                    case 2:
                        complex_scan(c);
                        memory_write(c);
                    break;
                    case 3:
                        printf("Existen en memory %d complejos\n", countMemory);
                        
                        printf("Selecciona 2\n");
                        scanf("%d",&n1);
                        scanf("%d",&n2);
                        memory_read(c, n1);
                        memory_read(c2, n2);
                        ptr = complex_add(c, c2);
                        res[0] = ptr[0];
                        res[1] = ptr[1];
                        memory_write(res);
                    break;
            }
        }
    }
    return 0;
}

void menu(){
    printf("Selecciona una opción\n");
    printf("1. Leer complejo de teclado\n");
    printf("2. Leer complejo de archivo\n");
    printf("3. Suma\n");
    printf("4. Resta\n");
    printf("5. Multiplicación con un escalar\n");
    printf("6. Multiplicación\n");
    printf("7. División\n");
    printf("8. Conjugado\n");
    printf("9. Escribir en pantalla\n");
    printf("10. Escribir a un archivo\n");
    printf("11. Salir\n");
}