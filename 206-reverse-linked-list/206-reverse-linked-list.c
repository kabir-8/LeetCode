/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *temp=head;
    int arr[5000];
    int i=0;
    while(temp!=NULL)
    {
        int x=temp->val;
        arr[i]=x;
        temp=temp->next;
        i++;
    }
    struct ListNode *temp2=head;
    i=i-1;
    while(temp2!=NULL)
    {
        temp2->val=arr[i];
        temp2=temp2->next;
        i--;
    }
    return head;
    
}