// Add a node at the end of the linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* head;

void insertLast(int x){
    if(head!=NULL){
    struct node* newnode=malloc(sizeof(struct node));
    struct node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->data=x;
    newnode->next=NULL;
    }
    else{
        struct node* newnode=malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=NULL;
        head=newnode;
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
    return 0;
}