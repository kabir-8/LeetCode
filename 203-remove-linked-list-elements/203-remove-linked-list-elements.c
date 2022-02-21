/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    if(head==NULL)
    {
        return head;
    }
    while(head->val==val)
    {
        head=head->next;
        if(head==NULL)
            return head;
    }
    struct ListNode *cur=head;
    while(cur!=NULL)
    {
        if(cur->next==NULL)
        {
            return head;
        }
        if((cur->next)->val==val)
        {
            cur->next=cur->next->next;
        }
        else
            cur=cur->next;
        
    }
    
    return head;
}