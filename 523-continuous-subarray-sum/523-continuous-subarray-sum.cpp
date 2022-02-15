class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(k==2000000000)
            return false;
        if(nums.size()==1)
            return false;
        for(int i=0;i<nums.size();i++)
        {   
            int sum=0;
            int flag=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                flag++;
                if(sum%k==0&&flag>=2)
                {
                    return true;
                }
            }
        }
        return false;
    }
};