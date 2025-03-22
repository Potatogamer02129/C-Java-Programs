// leetcode problem 19 remove Nth node from end of List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int m=0;
    struct ListNode* tvs=head;
    struct ListNode* prev=NULL;
    while(tvs != NULL){
        tvs=tvs->next;
        m++;
    }
    n=m-n;
    tvs=head;
    for(int i=0;i<n;i++){
        prev=tvs;
        tvs=tvs->next;
    }
    prev->=tvs->next;
    free(tvs);
    return head;
}