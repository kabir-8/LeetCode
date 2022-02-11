class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0||nums.size()==1)
            return nums.size();
        sort(nums.begin(), nums.end());
        int count=1;
        int mc=1;
        for(int i=1;i<nums.size();i++)
        {
            int prev=nums[i-1];
            if(nums[i]-prev==1)
            {
                count++;
                mc=max(mc,count);
            }
            else if(nums[i]-prev>1)
            {
                count=1;
            }
            
        }
        return mc;
    }
};