#include<stdio.h>

int main() {

    int mat1[10][10], mat2[10][10], mat3[10][10];
    int i,j,r1,r2,c1,c2;

    printf("Enter Size Of First Matrix: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter Size Of Second Matrix: ");
    scanf("%d%d",&r2,&c2);

    if (r1==r2 && c1==c2) {

        printf("Enter First Matrix:\n");
        for (i=0; i<r1; i++) {
            for (j=0; j<c1; j++) {
                scanf("%d",&mat1[i][j]);
            }
        }

        printf("Enter Second Matrix:\n");
        for (i=0; i<r2; i++) {
            for (j=0; j<c2; j++) {
                scanf("%d",&mat2[i][j]);
            }
        }

        for (i=0; i<r1; i++) {
            for (j=0; j<c1; j++) {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        printf("\nResult Matrix:\n");
        for (i=0; i<r1; i++) {
            for (j=0; j<c1; j++) {
                printf("%d ",mat3[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("Matrix Addition Not Possible");
    }

    return 0;
}