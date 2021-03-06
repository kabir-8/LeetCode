/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *slow,*temp;
    temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->next = head;
    slow = temp;
    while(n--){
        head = head->next;
    }
    while(head){
        head = head->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return temp->next;
}