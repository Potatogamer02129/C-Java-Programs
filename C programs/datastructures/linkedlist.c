#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void insert(int x){
struct node* Newnode=malloc(sizeof(struct node));
if(head==NULL) {
    Newnode->data=x;
    Newnode->next=NULL;
    head=Newnode;
}
else{
Newnode->data=x;
Newnode->next=head;
head=Newnode;
}

}

void print(){
    struct node* temp=head;
    while(temp != NULL){
        printf(" %d",temp->data);
        temp=temp->next;
    }
}

void reversio(struct node* p){
    if(p == NULL) return;
    reversio(p->next);
    printf(" %d",p->data);
}

void main(){
    head=NULL; //EMPTY LIST
    insert(1);
    insert(2);
    insert(3);
    print();
    printf("\n");
    reversio(head);
    printf("\n");
}