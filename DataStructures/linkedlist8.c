// leetcode problem 2. Addtwonumbers linked lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head=NULL; //Empty list
    int r1=0,r2=0,rf=0,or1=0,or2=0;
    int digit;
    while(l1 != NULL){
        r1=(r1*10)+l1->val;
        l1=l1->next;
    }
    while(l2 != NULL){
        r2=(r2*10)+l2->val;
        l2=l2->next;
    }
    while(r1!=0){
        digit=r1%10;
        or1=(or1*10)+digit;
        r1/=10;
    }
    
    while(r2!=0){
        digit=r2%10;
        or2=(or2*10)+digit;
        r2/=10;
    }
    rf=or1+or2;
 //   rf=r1+r2;
    if(rf=0){
        struct ListNode* newnode=malloc(sizeof(struct ListNode));
        newnode->val=0;
        newnode->next=NULL;
        head=newnode;
        return head;
    }
    while(rf!=0){
        digit=rf%10;
        struct ListNode* newnode=malloc(sizeof(struct ListNode));
        newnode->val=digit;
        newnode->next=NULL;
        if(head==NULL) head=newnode;
        else{
        struct ListNode* temp=head;
        while(temp->next != NULL){
        temp=temp->next;
        }
        temp->next=newnode;
    }
    rf/=10;
    }
    return head;
}