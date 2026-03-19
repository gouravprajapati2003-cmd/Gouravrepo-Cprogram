#include<stdio.h>
#include<malloc.h>
struct node
{
    int no;
    struct node *next;
};
struct node *front=NULL, *rear=NULL;
void enque(int n) {
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->no = n;
    p->next = NULL;
    if(front == NULL && rear == NULL) {
      front = p;
      rear = p; 
    } else {
        rear->next = p;
        rear = p; 
    }
}
void traverse() {
    struct node *temp;
    temp = front;
    if(front == NULL) {
        printf("Queue is Empty");
    } else {
        while(temp != NULL) {
            printf("\t%d",temp->no);
            temp = temp->next;
        }
    }
}
int main() {
    enque(100);
    enque(200);
    enque(300);
    enque(400);
    enque(500);
    traverse();
    return 0;
}