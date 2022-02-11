void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
void addnode(struct ListNode **h,int val)
{
    
    struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->next=NULL;
    newnode->val=val;
    if(*h==NULL)
    {
        *h=newnode;
    }
    else
    {
        struct ListNode *head=*h;
        while(head->next!=NULL)
        {
            head=head->next;
        }
        head->next=newnode;
    }
}


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    int arr[100];
    struct ListNode *one=list1;
    struct ListNode *two=list2;
    int i=0;
    while(one!=NULL)
    {
        arr[i]=one->val;
        one=one->next;
        i++;
    }
    while(two!=NULL)
    {
        arr[i]=two->val;
        two=two->next;
        i++;
    }
    selectionSort(arr,i);
    struct ListNode *new=NULL;
    for(int j=0;j<i;j++)
    {
       addnode(&new,arr[j]); 
    }
    return new;
}