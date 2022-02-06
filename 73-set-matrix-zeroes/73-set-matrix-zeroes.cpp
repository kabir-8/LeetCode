class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int m = matrix.size();
        int n = matrix[0].size();
        //vector row stores the ros which contain 0
        //similarly vector col stores column which have 0
        vector<int> row;
        vector<int> col;
        //here we start traversing the 2d matrix 
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                //if a 0 element is enciuntered then its row and column values are stored in row and column vectors respectively
                if(matrix[i][j] == 0){
                    
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        //now our row and column vectors contain rows and column that have 0
        //we traverse row vector find which row has a zero and change all its elements to 0
        for(int i = 0 ; i < row.size() ; i++){
            for(int j = 0 ; j < n ; j++){
                matrix[row[i]][j] = 0;
            }
        }
        //we traverse col vector find which column has a zero and change all its elements to 0
        for(int i = 0 ; i < col.size() ; i++){
            for(int j = 0 ; j < m ; j++){
                matrix[j][col[i]] = 0;
            }
        }
    }
    
};