#include<stdio.h>
#define MAXSIZE 8
int stack[8];
int Top = -1;
int isFull() {
    if(Top == MAXSIZE - 1) {
        return 1;
    }
    else {
        return 0;
    }
}
int push (int data) {
    if(! isFull()) {
       Top = Top+1;
       stack[Top] = data;
    }
    else {
        printf("Could Not Insert Data");
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    for(int i=0; i<=Top; i++) {
        printf("%d ", stack[i]);
    }
    return 0;
}