#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int size = digits.size();
        if (digits[size - 1] < 9) digits[size - 1]++;
        
        return digits;
    }
};

int main()
{

    return 0;
}
