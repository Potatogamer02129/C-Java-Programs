// Reverse the linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* head;

void insertLast(int x){
        struct node* newnode=malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=NULL;
        if(head==NULL) head=newnode;
        else{
        struct node* temp=head;
        while(temp->next != NULL){
        temp=temp->next;
        }
        temp->next=newnode;
    }
}

void print(){
    struct node* temp= head;
    printf("List is :");
    while(temp != NULL){
        printf(" %d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void Reversio(){
    struct node* prev=NULL;
    struct node* curr=head;
    struct node* next=NULL;
    while(curr != NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

int main(){
    head=NULL; //empty list
    int n,x;
    printf("Enter the number of nodes required: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the data at %d node: ",i+1);
        scanf("%d",&x);
        insertLast(x);
        print();
    }
    Reversio();
    print();
    return 0;
}