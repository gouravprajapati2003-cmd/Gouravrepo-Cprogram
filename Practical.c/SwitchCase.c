//Program to implement Switch-Case statement in C language.
#include<stdio.h>
int main () {
    char x;
    printf("Enter Alphabet : ");
    scanf("%c",&x);
    switch(x) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':{
            printf("Vowel");
            break;
        }
        default: {
            printf("Constant");
        }

    }

}