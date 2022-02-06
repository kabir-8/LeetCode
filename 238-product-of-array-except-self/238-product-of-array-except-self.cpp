class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l=nums.size();
        vector<int>arr(l);    
        int mul=1,count=0;
        vector<int>zero(l,0);
        for(int i=0;i<l;i++)
        {
            if(nums[i]==0)
            {
                count++;
                if(count==2)
                    return zero;
            }
            else
            mul=mul*nums[i];
        }
        int temp=mul;
        if(count==1)
            mul=0;
        
        for(int i=0;i<l;i++)
        {
            if(nums[i]!=0)
            arr[i]=mul/nums[i];
            else
            arr[i]=temp;    
        }
        return arr;
    }
};