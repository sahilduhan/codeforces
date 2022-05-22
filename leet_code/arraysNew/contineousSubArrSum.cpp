#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0;i < n;i++){
            for (int j = i;j < n;j++){
                if ((nums[i] + nums[j]) % k == 0 and i != j and j == i + 1) return true;
            }
        }
        return false;
    }
};
int main(){

    return 0;
}