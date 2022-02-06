class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i,sum=0;
        int l=nums.size();
        vector<int> arr(l);
        for(i=0;i<l;i++)
        {
            sum=sum+nums[i];
            arr[i]=sum;
        }
        return arr;
    }
};