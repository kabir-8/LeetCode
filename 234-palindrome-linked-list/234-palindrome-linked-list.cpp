class Solution {
public:
    ListNode* midPoint(ListNode* head)
    {
       if(head == NULL || head->next == NULL) 
           return head;
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* head)
    {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* headNext = head->next;
        head->next = NULL;
        
        ListNode* smallList = reverseList(headNext);
        headNext->next = head;
        
        return smallList;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return true;
        
        ListNode* h1 = head;
        ListNode* h2 = reverseList(midPoint(head)->next);
        
        while(h1 != NULL && h2 != NULL)
        {
            if(h1->val != h2->val)
            {
                return false;
            }
            h1 = h1->next;
            h2 = h2->next;
        }
        return true;
    }
};