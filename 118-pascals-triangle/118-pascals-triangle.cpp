class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=0;i<numRows;i++)
        {
            int num=1;
            for(int j=0;j<=i;j++)
            {
               temp.push_back(num);
                num=(num*(i-j)/(j+1));
            }
            ans.push_back(temp);
            temp.clear();
        }
    return ans;
    }
};