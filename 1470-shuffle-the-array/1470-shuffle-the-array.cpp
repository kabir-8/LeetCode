class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
         vector<int> arr(2*n);
     for(int j=0,i=0;j<n;i+=2,j++)
     {
         arr[i]=nums[j];
     }
     for(int i=1,j=n;j<2*n;j++,i+=2)
     {
         arr[i]=nums[j];
     }
        
        return arr;
    }
};