#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isUnique(vector<int>& nums){
        for (int i = 0;i < nums.size();++i){
            if (nums[i] == nums[i + 1]) return false;
        }
        return true;
    }
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0;i < nums.size();++i){
            if (isUnique(nums)) return count;
            else {
                nums[i]++;
                count++;
            }
        }
        return count;
    }
};
int main(){

    return 0;
}