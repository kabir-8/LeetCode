class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>x;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                x.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<x.size())
            {
                nums[i]=x[i];
            }
            else
            {
                nums[i]=0;
            }
        }
    }
};