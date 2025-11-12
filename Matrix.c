#include<stdio.h>
int main () {
    int mat [3][3],i,j;
    printf("Enter 3*3 Matrix = \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
           scanf("%d",&mat[i][j]);
        }
    }
    printf("\n Matrix is = ");
    for(i=0; i<3; i++) {
         printf("\n");
        for(j=0; j<3; j++) {
            printf("%d\t", mat[i][j]);
        }
       
    }
    return 0;
}