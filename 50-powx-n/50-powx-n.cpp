class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long num=n;
        if(num<0)
        {
            num=(-num);
        }
        while(num>0)
        {
            if(num%2==1)
            {
            ans=ans*x;
            num--;
            }
            else
            {
                x=x*x;
                num=num/2;
            }
        }
        return (n<0)? 1.0/ans:ans;
    }
};