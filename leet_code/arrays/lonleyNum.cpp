#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != nums[i + 1] + 1 && nums[i] != nums[i - 1] - 1) ans.push_back(nums[i]);
        }
        return ans;
    }
};
int main(){



    return 0;
}