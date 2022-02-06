class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int res = 0;
        int n = customers.size();
        for(int i=0;i<n;i++)
        {
            if(grumpy[i]==0)
            {
                res+=customers[i];
            }
        }
        int res1=0;
        for(int i=0;i<minutes;i++)
        {
            res1+= customers[i]*grumpy[i];
        }
        int dm = res1;
        for(int i=minutes;i<n;i++)
        {
            res1+=customers[i]*grumpy[i] - (customers[i-minutes]*grumpy[i-minutes]);
            dm = max(dm,res1);
        }
        return res+dm;
    }
};