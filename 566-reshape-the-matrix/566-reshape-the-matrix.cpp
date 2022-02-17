class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         if(r*c!=(mat.size()*mat[0].size()))
        {
            return mat;
        }
        vector<vector<int>>x;
        vector<int>s;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                s.push_back(mat[i][j]);
            }
        }
        int idx=0;
        for(int i=0;i<r;i++)
        {
            vector<int>temp;
            for(int j=0;j<c;j++)
            {
               temp.push_back(s[idx]);
                idx++;
            }
            x.push_back(temp);
        }
         return x;
    }
};