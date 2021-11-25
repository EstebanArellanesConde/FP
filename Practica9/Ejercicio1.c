/*
*
* [ ] son corchetes no paréntesis
*/

void leer_arreglo (int a[] , int n){
    for ( int i = 0 ; i < n ; i ++){
        printf("Ingrese elemento %dn\n" , i);
        scanf( "%d" , &a[i]);
    }
}

/*
*
* [ ] son corchetes no paréntesis
*/

void imprimir_arreglo (int a[] , int n){
    for (int i = 0 ; i < n ; i ++){
    printf("Elemento [%d]=%dn\n" , i+1 , a[i]);
    }
}