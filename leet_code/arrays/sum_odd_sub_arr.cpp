#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        long int result = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
            result += (arr[i] * (i + 1) * (n - i));
        return result;
    }
};
int main()
{

    return 0;
}