#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int m = 0, ans = 0;
        sort(nums.begin(), nums.end());
        int m = nums[nums.size() / 2];
        for (auto it : nums) ans += abs(it - m);
        return ans;
    }
};
int main(){

    return 0;
}