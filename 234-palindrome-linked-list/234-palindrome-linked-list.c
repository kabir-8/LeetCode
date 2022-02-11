/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool palindrome(int arr[], int n)
{
    int flag = 0;
    for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return false;
    else
        return true;
}
bool isPalindrome(struct ListNode* head){
    int arr[500000];
    int i=0;
    while(head!=NULL)
    {
        arr[i]=head->val;
        i++;
        head=head->next;
    }
    if(palindrome(arr,i))
    {
        return true;
    }
    else
    {
        return false;
    }
}