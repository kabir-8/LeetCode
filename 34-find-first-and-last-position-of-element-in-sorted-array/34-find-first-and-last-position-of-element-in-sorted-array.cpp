class Solution {
public:
     int lowerBound(vector<int>& nums, int lo, int hi, int target){
        while(lo < hi){
            int mid = lo + (hi - lo) / 2;
            if(target <= nums[mid]){
                hi = mid;
            }else{
                lo = mid + 1;
            }
        }
        return lo;
    }
    
    int upperBound(vector<int>& nums, int lo, int hi, int target){
         while(lo < hi){
            int mid = lo + (hi - lo + 1) / 2;
            if(target >= nums[mid]){
                lo = mid;
            }else{
                hi = mid - 1;
            }
        }
        return lo;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int sz = nums.size();
        int lo = 0;
        int hi = sz - 1;
        int lb = lowerBound(nums, lo, hi, target);
        int ub = upperBound(nums, lo, hi, target);
        if(lb > ub || sz == 0 || nums[lb] != target) return {-1, -1};
        return {lb, ub};
    }
};