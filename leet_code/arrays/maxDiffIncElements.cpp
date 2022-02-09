#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minVal = INT_MIN;
        int maxDiff = 0;

        for (int i = 0;i < nums.size(); i++){
            minVal = min(minVal, nums[i]);
            maxDiff = max(maxDiff, nums[i] - minVal);
        }
        if (maxDiff == 0) return -1;
        return maxDiff;
    }
};
int main(){


    return 0;
}