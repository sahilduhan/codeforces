#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minDiff = -1;
        for (int i = start; i < nums.size();i++){
            minDiff = (minDiff, abs(nums[i] - start));
        }
        return minDiff;
    }
};
int main(){


    return 0;
}