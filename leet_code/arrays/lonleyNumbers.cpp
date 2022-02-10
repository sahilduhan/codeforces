#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (auto it : nums) mp[it]++;
        for (auto it : mp){
            if (it.second == 1 && mp.count(it.first + 1) == 0 && mp.count(it.first - 1) == 0) ans.push_back(it.first);
        }
        return ans;
    }
};
int main(){

    return 0;
}