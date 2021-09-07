#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int maximumWealth = 0;
        for (auto i : accounts)
        {
            int sum = 0;
            for (auto j : i) sum += j;
            if (maximumWealth < sum) maximumWealth = sum;
        }
        return maximumWealth;
    }
};