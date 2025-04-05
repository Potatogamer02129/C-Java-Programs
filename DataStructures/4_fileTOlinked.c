#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char *str;
    struct node* next;
} node;

node* head = NULL;

void Show() {
    node* tvs = head;
    while (tvs) {
        printf("%s", tvs->str);
        tvs = tvs->next;  // Fixed: Move to next node
    }
}

void insert(char* string) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->str = strdup(string);  // Make a copy of the string
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    node* tmp = head;
    while (tmp->next) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void update(char *string, int pos) {
    int i = 1;
    node *tmp = head;
    while (i != pos && tmp) {
        tmp = tmp->next;
        i++;
    }
    if (tmp) {
        free(tmp->str);  // Free the old string
        tmp->str = strdup(string);  // Store a copy of the new string
    }
}

void freeList() {
    node* tmp;
    while (head) {
        tmp = head;
        head = head->next;
        free(tmp->str);
        free(tmp);
    }
}

void main() {
    char filepath[100];
    char buffer[255];
    int l = 0;
    
    printf("Enter the name of the file: ");
    scanf("%s", filepath);
    FILE *fp = fopen(filepath, "r");
    if (fp == NULL) {
        printf("The file doesn't Exist\n");
        return;
    }
    
    while (fgets(buffer, sizeof(buffer), fp)) {
        l++;
        insert(buffer);
    }
    fclose(fp);
    
    int ch, pos;
    while (1) {
        printf("1.Show\n2.Insert\n3.Update\n4.Exit\nEnter Your choice: ");
        scanf("%d", &ch);
        while (getchar() != '\n');  // Clear input buffer
        
        if (ch == 4) break;
        
        switch (ch) {
            case 1:
                Show();
                break;
            case 2:
                printf("Enter the String: ");
                fgets(buffer, sizeof(buffer), stdin);
                insert(buffer);
                l++;  // Increment line count
                break;
            case 3:
                printf("Enter the line to be updated: ");
                scanf("%d", &pos);
                while (getchar() != '\n');  // Clear input buffer
                
                if (pos <= l && pos > 0) {
                    printf("Enter the String: ");
                    fgets(buffer, sizeof(buffer), stdin);
                    update(buffer, pos);
                } else {
                    printf("File doesn't have this many lines\n");
                }
                break;
        }
    }
    
    FILE *file = fopen(filepath, "w");
    node* current = head;
    while (current) {
        fputs(current->str, file);
        current = current->next;
    }
    fclose(file);
    
    freeList();  // Free allocated memory
}
