#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int count = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size();++i){
            mp[nums[i]]++;

            if (mp[nums[i]] < 3){
                ans.push_back(nums[i]);
                count++;
            }
        }
        for (int i = 0; i < ans.size();++i) nums[i] = ans[i];
        return count;
    }
};
int main(){


    return 0;
}