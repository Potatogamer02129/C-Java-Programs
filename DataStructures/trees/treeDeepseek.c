#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the BST
struct TreeNode* insertNode(struct TreeNode* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

// Function to perform an in-order traversal of the BST
void inOrderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

int main() {
    struct TreeNode* root = NULL;
    int value;
    char choice;

    do {
        printf("Enter a value to insert into the BST: ");
        scanf("%d", &value);
        root = insertNode(root, value);

        printf("Do you want to add another element? (y/n): ");
        scanf(" %c", &choice);  // Note the space before %c to consume any leftover newline character

    } while (choice == 'y' || choice == 'Y');

    printf("In-order traversal of the BST: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}
