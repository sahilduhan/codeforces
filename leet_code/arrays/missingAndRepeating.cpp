#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalSum(int n){
        if (n == 0) return 0;
        return n + totalSum(n - 1);
    }
    int missingNumber(vector<int>& nums) {
        int sum = totalSum(nums.size());
        int currSum = 0;
        for (int i = 0; i < nums.size(); i++) currSum += nums[i];
        return sum - currSum;
    }
};
int main(){

    return 0;
}