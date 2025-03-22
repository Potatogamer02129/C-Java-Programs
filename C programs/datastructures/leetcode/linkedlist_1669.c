/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode* tvsa=list1;
    int count=0;
    while(count!=a-1){
        count++;
        tvsa=tvsa->next;
    }
    struct ListNode* tvsb=list1;
    count=0;
    while(count!=b){
        tvsb=tvsb->next;
    }
    tvsa->next=list1;
    tvsa=list2;
    while(tvsa->next){
        tvsa=tvsa->next;
    }
    tvsa->next=tvsb;
    return list1;
}