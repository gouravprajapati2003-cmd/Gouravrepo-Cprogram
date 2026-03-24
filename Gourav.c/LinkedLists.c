#include<stdio.h>
#include<malloc.h>
struct node {
    int no;
    struct node *next;
};
struct node *start;
void insert(int n) {
    struct node *p, *temp;
    p = (struct node*)malloc(sizeof(struct node));
    p->no = n;
    p->next = NULL;
    if(start == NULL) {
        start = p;
    } else {
        temp = start;
       while (temp->next != NULL) {
        temp = temp->next;
       }
       temp->next = p;
    }
}
void traverse() {
    struct node *temp;
    if(start == NULL) {
        printf("\n Linked List is Empty");
    } else {
        temp = start;
        while(temp != NULL) {
            printf("\t%d",temp->no);
            temp = temp->next;
        }
    }
} 
int main() {
    start = NULL;
    insert(100);
    insert(200);
    insert(300);
    insert(400);
    insert(500);
    traverse();

    return 0;
}

