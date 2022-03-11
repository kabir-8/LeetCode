class Solution {
public:
    int send(int a,int b)
    {
        if(b==0)
            return a;
        return send(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[nums.size()-1];
      return send(a,b);
    }
};