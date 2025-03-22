int stack[1000], Top = -1;

void push(int x)
{
    stack[++Top] = x;
}

int pairSum(struct ListNode* head) {
    struct ListNode* temp = head;
    while(temp != NULL)
    {
        push(temp->val);
        temp = temp->next;
    }
    int sum, max = stack[Top] + head->val;
    temp = head;
    int i=Top/2;
    while(Top >=i)
    {
        sum = stack[Top--] + temp->val;
        if(sum > max)
        {
            max = sum;
        }
        temp = temp->next;
    }
    return max;
}