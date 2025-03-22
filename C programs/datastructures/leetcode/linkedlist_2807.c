struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    if(head==NULL || head->next==NUL) return head;
    struct ListNode* curr=head->next;
    struct ListNode* prev=head;
    while(curr != NULL){
        struct ListNode* NewNode=malloc(sizeof(struct ListNode));
        ListNode->val=GCD(prev->val,curr->val);
        ListNode->next=curr;
        prev->next=ListNode;
        prev=curr;
        curr=curr->next;
    }
}

int GCD(int x,int y){
    int start,i;
    if(x>y) start=y;
    else start=x;
    for(i=start;i>0;i++){
        if(i%x==0 && i%y==0) return i;
    }
    return -1;
}