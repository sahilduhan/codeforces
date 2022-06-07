#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k){
        unordered_map<int, int> mp;
        int ans = 0;

        for (int it : nums) mp[it]++;
        for (auto it : mp){
            if (mp.find(it.first + k) != mp.end() and it.first != (it.first + k)) ++ans;
            if (k == 0 and mp[it.first] > 1) ++ans;
        }
        return ans;
    }
};
int main(){


    return 0;
}