#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char data;
    struct Node* next
}Node;

Node* top=NULL;

void push(char val){
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=val;
    temp->next=top;
    top=temp;
}

void pop(){
    if(top==NULL){
        printf("Stack is empty\n");
        return;
    }
    Node* temp=top;
    top=top->next;
    free(temp);
}

char Top(){
    if(top==NULL){
        printf("Stack is empty\n");
        return;
    }
    return top->data;
}

int isEmpty(){
    return top==NULL;
}

int isBalanced(char* exp){
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if(isEmpty()){
                return 0;
            }
            char temp=Top();
            if((exp[i]==')' && temp=='(') || (exp[i]=='}' && temp=='{') || (exp[i]==']' && temp=='[')){
                pop();
            }
            else{
                return 0;
            }
        }
    }
    return isEmpty();
}

void main(){
    char* exp="{(a+b)*(c-d)}";
    if(isBalanced(exp)){
        printf("Balanced\n");
    }
    else{
        printf("Not Balanced\n");
    }
}

// Output: Balanced

