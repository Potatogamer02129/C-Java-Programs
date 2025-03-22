// Leetcode problem 21. Merge Two sorted lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* head=NULL; //Empty list
    struct ListNode* temp1=list1;
    struct ListNode* temp2=list2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->val <= temp2->val || temp2==NULL){
        struct ListNode* newnode=malloc(sizeof(struct ListNode));
        newnode->val=temp1->val;
        newnode->next=NULL;
        if(head==NULL) head=newnode;
        else{
        struct ListNode* tvs=head;
        while(tvs->next != NULL){
        tvs=tvs->next;
        }
        tvs->next=newnode;
        temp1=temp1->next;
    }
    }
        else if(temp2->val <= temp1->val || temp1==NULL){
        struct ListNode* newnode=malloc(sizeof(struct ListNode));
        newnode->val=temp2->val;
        newnode->next=NULL;
        if(head==NULL) head=newnode;
        else{
        struct ListNode* tvs=head;
        while(tvs->next != NULL){
        tvs=tvs->next;
        }
        tvs->next=newnode;
        temp2=temp2->next;
    }
    }
    return head;
}
}
