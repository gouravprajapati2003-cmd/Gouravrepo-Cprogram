#include<stdio.h>
int main () {

    int mat1[10][10], mat2[10][10], mat3[10][10],i,j,r1,r2,c1,c2;
    printf("Enter Size Of First Matrix");
    scanf("%d%d",&r1,&r2);
    printf("Enter Size Of second Matrix");
    scanf("%d%d",&r2,&c2);
    if (r1==r2 && c1==c2) {
        printf("Enter First Matrix");
        for (i=0; i<r1; i++) {
             for(j=0; j<c1; j++) {
                scanf("%d",&mat1[i][j]);
             }
        }
        printf("Enter Second Matrix");
        for (i=0; i<r2; i++) {
            for (j=0; j<c2; j++) {
                scanf("%d",mat2[i][j]);
            }
        }
        printf("\n First Matrix is ");
        for (i=0; i<r1; i++) {
            printf
            for (j=0; j<c2; j++) {
                scanf("%d",mat2[i][j]);
    }
}