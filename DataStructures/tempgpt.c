// Add a node at the end of the linked list
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
    if (head != NULL) {
        struct node* tvs = head;
        struct node* prev = NULL;  // Initialize prev as NULL
        int flg = 0;

        // Special case: Check if the head node needs to be deleted
        if (tvs->data == del) {
            head = tvs->next;  // Move the head to the next node
            free(tvs);         // Free the current head node
            tvs = NULL;         // Set tvs to NULL to avoid dangling pointer
            flg = 1;
        } else {
            // Traverse the list to find the node to delete
            while (tvs != NULL) {
                if (tvs->data == del) {
                    prev->next = tvs->next;  // Bypass the node to be deleted
                    free(tvs);               // Free the node
                    tvs = NULL;               // Set tvs to NULL to avoid dangling pointer
                    flg = 1;
                    break;
                }
                prev = tvs;      // Move prev to the current node
                tvs = tvs->next; // Move tvs to the next node
            }
        }

        // Print the result of the deletion
        if (flg)
            printf("Found %d and node deleted\n", del);
        else
            printf("Node with data %d doesn't exist.\n", del);
    } else {
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
    printf("Enter a node to be deleted: ");
    scanf("%d",del);
    DeleteNode(del);
    print();
    return 0;
}