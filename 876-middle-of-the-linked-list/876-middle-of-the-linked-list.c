/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){

    
    int arr[100];
    int i=0;
    int mid;
    struct ListNode *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    
    i=i/2;
    
    int j=0;
    while(j<i)
    {
        head=head->next;
        j++;
    }
    return head;
    
    
}