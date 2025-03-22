#include <stdio.h>

int arr[100];

int front=-1;
int rear=-1;

int isEmpty()
{
    if(front==-1 && rear==-1) return 1;
    return 0;
}

int Dequeue()
{
    if (isEmpty()) {
        printf("Nothing to Dequeue here\n");
        return -1;
    }
    int x = arr[front];
    if (front == rear) {
        // Reset to empty state
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % 100;
    }
    return x;
}

void Enqueue(int x)
{
    if(front==-1 && rear==-1)
    {
        rear++; front++;
        arr[rear]=x;
        return;
    }
    rear=(rear+1)%100;
    arr[rear]=x;
    return;
}

void peek()
{
    printf("%d\n",arr[front]);
    return;
}

void printQ()
{
    if(isEmpty()){
        printf("Nothing to print here\n");
        return;
    }
    int i=front;
    while(i!=rear)
    {
        printf("%d ",arr[i]);
        i=(i+1)%100;
    }
    printf("%d ",arr[i]);
    printf("\n");
}

void main()
{
    printQ();
    Enqueue(10);
    Enqueue(11);
    printQ();
    Dequeue();
    printQ();
    Enqueue(12);
    Enqueue(13);
    Enqueue(14);
    Enqueue(15);
    peek();
    Dequeue();
    Dequeue();
    printQ();
    Dequeue();
    Dequeue();
    Dequeue();
    printQ();
    Enqueue(1); Enqueue(2); printQ(); Dequeue(); printQ();
}