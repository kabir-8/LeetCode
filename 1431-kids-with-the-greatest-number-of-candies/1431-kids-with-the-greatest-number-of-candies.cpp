class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int l=candies.size();
        vector<bool>ans(l);
        int m=-99;
        for(int i=0;i<l;i++)
        {
            m=max(m,candies[i]);
        }
        for(int i=0;i<l;i++)
        {
            if((candies[i]+extraCandies)>=m)
            {
                ans[i]=true;
            }
            else
            {
                ans[i]=false;
            }
        }
        return ans;
    }
};