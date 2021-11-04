#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(auto it: nums){
            ans.push_back(it*it);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{

    return 0;
}