#include <stdio.h>
#include <stdlib.h>

typedef struct node{        // list to be used as a Queue
    int val;
    struct node* next;
}node;

node* front=NULL;   // Dequeue from here 
node* rear=NULL;    // Enqueue from here

int isEmpty()
{
    if(front==NULL && rear==NULL) return 1;
    return 0;
}

void Enqueue(int x)
{
    node *temp=(node*)malloc(sizeof(node));
    temp->val=x;
    temp->next=NULL;
    if(isEmpty()){
        front=temp;
        rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}

int Dequeue()
{
    if(isEmpty()){
        printf("Cant dequeue from a empty list\n");
        return -1;
    }
    node *temp=front;
    int x=front->val;
    front=front->next;
    free(temp);
    if(front==NULL) rear=NULL;
    return x;
}

int peek()
{
    if(isEmpty()){
        printf("Nothing to see here queue is empty\n");
        return -1;
    }
    printf("%d\n",front->val);
    return front->val;
}

void printQ()
{
    if(isEmpty()){
        printf("Nothing to print the queue is empty\n");
        return;
    }
    node *temp=front;
    while(temp){
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");
    return;
}

void main()
{
    printQ();
    Enqueue(10);
    printQ();
    Enqueue(100);
    Enqueue(101);
    Enqueue(102);
    printQ();
    peek();
    Dequeue();
    Dequeue();
    peek();
    printQ();
    Dequeue();
    Dequeue();
    printQ();
}