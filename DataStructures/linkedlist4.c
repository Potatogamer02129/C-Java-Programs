//Delete All occurence of a node at the end of the linked list
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

void DeleteNode(int del){
    if(head!=NULL){
    struct node* tvs=head;
    struct node* prev=NULL;
    if(tvs->data == del){
        head=tvs->next;
        free(tvs);
        tvs=NULL;
    }
    else{
    while(tvs != NULL){
        if(tvs->data==del){
            prev->next=tvs->next;
        }
        else{
            prev=tvs;
        }
        tvs=tvs->next;
    }
    } 
    }
    else{
        printf("The list is empty\n");
    }
}

int main(){
    head=NULL; //empty list
    int n,x,del;
    printf("Enter the number of nodes required: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the data at %d node: ",i+1);
        scanf("%d",&x);
        insertLast(x);
        print();
    }
    printf("Enter a node Data to be deleted: ");
    scanf("%d",&del);
    DeleteNode(del);
    print();
    return 0;
}