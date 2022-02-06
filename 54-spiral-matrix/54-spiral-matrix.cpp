class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols=matrix[0].size();
        vector<int>ans(rows*cols);
    int top=0,bottom=rows-1,left=0,right=cols-1;
    int dir=1,pos=0,i;
    while(top<=bottom&& left <=right){
        if(dir==1){
            for(i=left;i<=right;i++){
                ans[pos]=matrix[top][i];
                pos++;
            }
            top++;
            dir=2;
            
        }else if(dir==2){
            for(i=top;i<=bottom;i++){
                ans[pos]=matrix[i][right];
                pos++;
            }
            right--;
            dir=3;
        
        }else if(dir==3){
            for(i=right;i>=left;i--){
                ans[pos]=matrix[bottom][i];
                pos++;
            }
            bottom--;
            dir=4;
        }
        else if(dir==4){
            for(i=bottom;i>=top;i--)
            {
                ans[pos]=matrix[i][left];
                pos++;
            }
            left++;
            dir=1;
        }
        
        
    }
        
       return ans; 
        
    }
};