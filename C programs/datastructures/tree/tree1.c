#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node* left;
    struct node* right;
};

struct node* CreateNode(int key){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->val=key;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

struct node* insert(struct node* root,int key){
    if(root==NULL){
        return CreateNode(key);
    }

    if(key < root->val){
        root->left=insert(root->left,key);
    }
    else if(key > root->val){
        root->right=insert(root->right,key);
    }
    return root;
}

void inorderTraversal(struct node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->val);
        inorderTraversal(root->right);
    }
}

int main(){
    struct node* root=NULL;
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,200);
    root=insert(root,10);
    root=insert(root,2);
    inorderTraversal(root);
    return 0;
}