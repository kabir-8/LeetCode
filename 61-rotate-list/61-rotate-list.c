/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void reverse(int* nums, int i, int j) {
    int le = i;
    int ri = j;
    
    while (le < ri) {
        int temp = nums[le];
        nums[le] = nums[ri];
        nums[ri] = temp;
        
        le++;
        ri--;
    }
}

void rotate(int* nums, int numsSize, int k){
    
    k = k % numsSize;
    
    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize-1);
    reverse(nums, 0, numsSize - 1);

}
struct ListNode* rotateRight(struct ListNode* head, int k){
    if(head==NULL)
    {
        return 0;
    }
    int arr[500];
    int i=0;
    struct ListNode *temp=head;
    while(temp!=NULL)
    {
        arr[i]=temp->val;
        i++;
        temp=temp->next;
    }
    rotate(&arr,i,k);
    i=0;
    struct ListNode *t=head;
    while(t!=NULL)
    {
        t->val=arr[i];
        i++;
        t=t->next;
    }
    return head;
}