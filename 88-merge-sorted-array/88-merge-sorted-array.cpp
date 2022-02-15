class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i;
        int l=nums1.size();
        for(i=0;i<n;i++)
        {
           nums1[l-i-1]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};