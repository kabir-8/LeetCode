class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==1)
        {
            return 0;
        }
        vector<int> arr(n, 0);
        for(int i=2;i<n;i++)
        {
            if(i*i>n)
            {
                break;
            }
            if(arr[i]==0)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    arr[j]=1;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count++;
            }
        }
    return count-2;    
    }
    
};