#include <stdio.h>
#include <stdlib.h>

int size=10;
int arr[10];
int rear=-1,front=-1;

int Rear(){
    return arr[rear];
}
void enQueue(int n);
void deQueue();
int isEmpty();
void showQueue();
int isFull();

void main(){
    int ch,num;
    while(1){
        printf("|---------------------------------------|\n");
        printf("|----------------|MENU|-----------------|\n");
        printf("|---------------------------------------|\n");
        printf("1. Enqueue\n");
        printf("2. dequeue\n");
        printf("3. Show queue\n");
        printf("4. See the first one in the queue\n");
        printf("5. Exit\n");
        printf("---------------------------------------\n");
        printf("Enter your Choice: ");
        scanf("%d",&ch);
        if(ch==5) break;
        switch(ch){
            case 1:
            printf("Enter the number to be added: ");
            scanf("%d",&num);
            enQueue(num);
            break;
            case 2: 
            deQueue();
            break;
            case 3:
            showQueue();
            break;
            case 4:
            num=Rear();
            printf("The first one in the Queue is %d",num);
        }
    }
    printf("Exited.......\n");
}

int isEmpty(){
    if(rear==-1 && front==-1) return 1;
    else return 0;
}

int isFull(){
    if(((front+1)%size)==rear) return 1;
    else return 0;
}

void enQueue(int n){
    if(isFull()){
        printf("---------------------------------------\n");
        printf("The Queue is Full.....\n");
        printf("---------------------------------------\n");
        return;
    }
    if(isEmpty()){
        front=0;
        rear=0;
        arr[front]=n;
        return;
    }
    front=(front+1)%size;
    arr[front]=n;
    return;
}

void deQueue(){
    if(isEmpty()){
        printf("---------------------------------------\n");
        printf("Nothing to dequeue the queue is empty already.....\n");
        printf("---------------------------------------\n");
        return;
    }
    int num=arr[rear];
    if(rear==front){
        rear=front=-1;
        return;
    }
    else{
        rear=(rear+1)%size;
    }
}

void showQueue(){
    if(isEmpty()){
        printf("---------------------------------------\n");
        printf("The Queue is empty nothing to Show.....\n");
        printf("---------------------------------------\n");
        return;
    }
    int i;
    i=rear;
    while(1){
        printf("%d ",arr[i]);
        i=(i+1)%size;
        if(i==front) {
            printf("%d ",arr[i]);
            break;
        }
    }
    printf("\n");
}