/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteMiddle(struct ListNode* head){

    int arr[100];
    int i=0;
    int mid;
    struct ListNode *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    if(i==1)
    {
        head=NULL;
        return head;
    }
    i=i/2;
    int j=0;
    struct ListNode *res=head;
    struct ListNode *prev;
    while(j<i)
    {
        prev=head;
        head=head->next;
        j++;
    }
    prev->next=head->next;
    return res;
}