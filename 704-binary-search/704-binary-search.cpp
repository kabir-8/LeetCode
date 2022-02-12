class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=nums.size();
        int mid=s/2;
        int start=0;
        int end=s-1;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return -1;
    }
};