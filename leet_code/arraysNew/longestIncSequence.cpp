#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (auto it : nums) s.insert(it);

        int ans = 0;
        for (int i = 0;i < nums.size();i++){
            if (s.find(nums[i] - 1) != s.end()) continue;
            int count = 1;
            int val = nums[i] + 1;
            while (s.find(val) != s.end()){
                val++;
                count++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for (auto it : nums) st.insert(it);
        int ans = 0;
        for (int i = 0;i < nums.size();i++){
            int count = 0;
            int val = nums[i];
            while (st.find(val) != st.end()){
                val++;
                ans++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
int main(){


    return 0;
}