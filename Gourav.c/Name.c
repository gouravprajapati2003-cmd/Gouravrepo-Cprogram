#include<stdio.h>
int main (){
    char N[40];
    int i,p;
    printf("Enter Name : ");
    gets(N);
    printf("%c",N[0]);
    for(i=0; N[i]!='\0'; i++) {
        if (N[i]==' ') {
            p=i;
            printf(". %c",N[i+1]);
        }
    }
    for (i=p+2; N[i]!='\0'; i++) {
        printf("%c",N[i]);
    }
}