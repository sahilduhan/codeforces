#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
       return unique(nums.begin(), nums.end())-nums.end();
    }
};
int main()
{

    return 0;
}