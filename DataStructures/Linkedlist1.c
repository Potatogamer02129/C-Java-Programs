// linked list and inserting node at the beginning of the list
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head; //Global variable can be accesed everywhere

void insert(int x){
    struct Node* temp =malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;
}

void print(){
    struct Node* temp= head;
    printf("List is :");
    while(temp != NULL){
        printf(" %d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    head=NULL; //empty list
    int n,x;
    printf("Enter the number of nodes required: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the data at %d node: ",i+1);
        scanf("%d",&x);
        insert(x);
        print();
    }
    return 0;
}