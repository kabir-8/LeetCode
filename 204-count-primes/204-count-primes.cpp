class Solution {
public:
    int countPrimes(int n) {
        vector<bool>arr(n,true);
        long long int count=0;
        if(n==0 ||n==1||n==2)
            return 0;
        for(long long int i=2;i<n;i++)
        {
            if(arr[i])
                count++;
            for(long long int j=i*i;j<n;j+=i)
            {
                arr[j]=false;
            }
        }
        return count;
    }
};