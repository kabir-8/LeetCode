bool hasCycle(struct ListNode *head) {
    if(head==NULL)
        return false;
    struct ListNode *temp=head;
    struct ListNode *prev;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
        prev->val=INT_MIN;
        prev->next=NULL;
    }
    if(temp->val==INT_MIN)
    {
        return true;
    }
    else
    {
        return false;
    }
}