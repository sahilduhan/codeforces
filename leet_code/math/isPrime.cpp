class Solution
{
public:
    int countPrimes(int n)
    {
        int count = 0;
        for(int i=2;i<n;i++)
        {
            if(n%i!=0) count++;
        }
        return n-count;
    }
};