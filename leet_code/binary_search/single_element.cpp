#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;
        if (nums.size() == 1) return nums[0];
        if (nums[l] != nums[l + 1]) return nums[l];
        if (nums[h] != nums[h - 1]) return nums[h];
        while (l < h){
            int m = l + h / 2;
            if (nums[m] != nums[m + 1] and m != nums[m - 1]) return nums[m];
            else if (nums[m] == nums[m + 1]) l = m + 1;
            else h = m - 1;
        }
        return -1;
    }
};
int main(){

    return 0;
}