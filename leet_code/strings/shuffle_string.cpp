#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string ans;
        for (int i = 0; i < indices.size(); i++) ans[indices[i]] = s[i];
        return ans;
    }
};