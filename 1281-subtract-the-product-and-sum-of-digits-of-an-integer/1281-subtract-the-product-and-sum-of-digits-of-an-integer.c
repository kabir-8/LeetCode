

int subtractProductAndSum(int n){

    int sum=0;
    int mul=1;
    while(n!=0)
    {
        int ld=n%10;
        sum+=ld;
        mul*=ld;
        n/=10;
    }
    return mul-sum;
    
}