#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum = INT_MIN;
        int maxSum = 0;

        for (auto it : nums){
            sum += it;
            if (sum < 0) sum = 0;
            maxSum = max(sum, maxSum);
        }

        int minSum = 0;
        sum = 0;

        for (auto it : nums){
            sum += it;
            if (sum > 0) sum = 0;
            minSum = min(sum, minSum);
        }
        return max(maxSum, abs(minSum));
    }
};
int main(){


    return 0;
}