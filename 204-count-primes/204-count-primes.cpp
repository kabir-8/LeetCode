class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        int count=0;
        vector<bool> primes(n,1);
        primes[0] = false;
        primes[1] = false;
        for(long i=2;i<n;i++)
        {
            if(primes[i])
            {
                count++;
                for(long j=i*i;j<n;j+=i)
                    primes[j]=0;
            }
        }
        
        return count;
    }
};