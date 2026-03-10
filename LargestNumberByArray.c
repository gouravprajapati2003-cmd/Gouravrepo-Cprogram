#include<stdio.h>
int main () {
    int a[100], i, n, l, p;
    printf("How Many Number You Want To Print : ");
    scanf("%d",&n);
    printf("Enter numbers : ");
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    p = 0;
    l = a[0];
    for(i=1; i<n; i++) {
        if(a[i]>l) {
            l = a[i];
            p = i;
        }
    }
     printf("Largest number is = %d ",l);
        printf("\n Its position is = %d ",p+1);
        return 0;
    
}