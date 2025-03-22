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

void DeleteNode(int del) {
    if (head == NULL) {
        printf("The list is empty\n");
        return;
    }

    struct node* tvs = head;
    struct node* prev = NULL;

    // Delete all occurrences of the head node
    while (head != NULL && head->data == del) {
        tvs = head;         // Temporary pointer to the current head
        head = head->next;  // Update head to the next node
        free(tvs);          // Free the deleted node
    }

    // Traverse and delete nodes other than the head
    tvs = head; // Start from the (new) head of the list
    while (tvs != NULL) {
        if (tvs->data == del) {
            prev->next = tvs->next; // Skip the node to be deleted
            free(tvs);             // Free the memory
            tvs = prev->next;      // Move to the next node
        } else {
            prev = tvs;            // Update the previous pointer
            tvs = tvs->next;       // Move to the next node
        }
    }

    printf("All occurrences of %d have been deleted, if present.\n", del);
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