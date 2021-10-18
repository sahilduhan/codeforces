#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> result;
        int ans = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            ans += gain[i];
            result.push_back(ans);
        }
        int max_ = *max_element(result.begin(), result.end());
        if(max_<0) max_ = 0;
        return max_;
    }
};
int main()
{

    return 0;
}