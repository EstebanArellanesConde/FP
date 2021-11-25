#include <stdio.h>

int main(){
    float mat[3][3];
    float mat2[4][4];
    float **mat3=NULL;
    
    mat_read_3(mat, 3);
    mat_read_4(mat2, 4);
    mat3 = mat_create(3, 4);
    mat_read_4(mat3, 3, 4);
    mat_delete(mat3, 3);
    return 0;
}