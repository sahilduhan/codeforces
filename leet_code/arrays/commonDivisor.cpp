#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int min_e= *min_element(nums.begin(), nums.end());
        int max_e= *max_element(nums.begin(), nums.end());
        return __gcd(min_e, max_e);
    }
};
int main()
{

    return 0;
}