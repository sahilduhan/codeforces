#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int>mp;
        vector<int>v;
        int n = nums.size();
        int k = n / 3;
        for (int i = 0;i < n;i++)
        {
            mp[nums[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second > k)
            {
                v.push_back(i.first);
            }
        }
        return v;
    }
};
int main(){

    return 0;
}