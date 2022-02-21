bool hasCycle(struct ListNode *head) {
    if(head==NULL)
        return false;
    struct ListNode *temp=head;
    struct ListNode *prev;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
        prev->val=-9;
        prev->next=NULL;
    }
    if(temp->val==-9)
    {
        return true;
    }
    else
    {
        return false;
    }
}