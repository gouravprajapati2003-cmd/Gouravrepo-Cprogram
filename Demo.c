#include<stdio.h>
void sumo (int *x, int y){
    int temp = *x+y;
    *x += temp;
    if (y==10) {
        printf("\n%d %d %d",temp,*x,y);
    }
}
void main () {
    int m=20, n=50;
    sumo (&m, 10);
    printf("\n%d %d",m,n);
    sumo (&m,n);
    printf("\n%d %d",m,n);
}