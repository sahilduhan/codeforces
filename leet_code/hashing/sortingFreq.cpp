#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int>res;
        for (int i = 0; i < nums.size(); i++) mp[nums[i]]++;
        for (auto it : mp){
            int val = it.second;
            for (int i = 0; i < nums.size(); i++) res.push_back(mp[nums[i]]);
        }
        return res;
    }
};
int main(){

    return 0;
}