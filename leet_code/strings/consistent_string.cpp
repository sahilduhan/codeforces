#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int count = 0;
        for (auto x : words)
        {
            if(x==allowed) count++;
        }
        return count;
    }
};
int main()
{

    return 0;
}