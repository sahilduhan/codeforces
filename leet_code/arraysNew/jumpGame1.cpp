#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 1) return true;
        int m = 0;
        for (int i = 0;i < nums.size() - 1 and m >= i;i++){
            if (m < i + nums[i]){
                m = max(i, i + nums[i]);
            }
            if (m >= nums.size() - 1) return true;
        }
        return false;
    }
};
int main(){


    return 0;
}