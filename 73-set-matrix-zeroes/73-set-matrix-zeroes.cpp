class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][j]=93164;
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==93164)
                {
                    for(int a=0;a<row;a++)
                    {
                        if(matrix[a][j]!=93164)
                            matrix[a][j]=0;
                    }
                    for(int b=0;b<col;b++)
                    {
                        if(matrix[i][b]!=93164)
                            matrix[i][b]=0;
                    }
                    matrix[i][j]=0;
                }
            }
        }
    }
};