struct ListNode* swapNodes(struct ListNode* head, int k) {
    int total=0,temp,i,ki=0;
    struct ListNode* front=head;
    struct ListNode* back=head;
    struct ListNode* tvs=head;
    while(tvs){
        if(ki<k){
            front=front->next;
            ki++;
        } 
        total++;
        tvs=tvs->next;
    }
    front=head;
    i=total-k;
    for(int j=0;j<i;j++){
        back=back->next;
    }
    temp=back->val;
    back->val=front->val;
    front->val=temp;
    return head;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    int total=0,temp,i;
    struct ListNode* front=head;
    struct ListNode* back=head;
    while(front){
        total++;
        front=front->next;
    }
    front=head;
    i=total-k;
    for(int j=0;j<i;j++){
        back=back->next;
    }
    for(int j=0;j<k-1;j++){
        front=front->next;
    }
    temp=back->val;
    back->val=front->val;
    front->val=temp;
    return head;
}