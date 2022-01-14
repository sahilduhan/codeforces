#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                if (abs(nums[i] - nums[j]) <= t and abs(i - j) <= k) {
                    return true;
                    break;
                }
            }
        }
        return false;
    }
};
int main(){

    return 0;
}