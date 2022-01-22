#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int>res;
        for (int i = 0; i < nums.size(); i++) mp[nums[i]]++;

        for (auto it : mp) {
            for (int i = 0; i < it.second; i) res.push_back(it.first);
        }
        return res;
    }
};
int main(){

    return 0;
}