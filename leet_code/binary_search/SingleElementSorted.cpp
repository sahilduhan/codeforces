#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size() == 1)return nums[0];
        int start = 0;
        int end = nums.size();
        while (start < end){
            int mid = start + (end - start) / 2;
            if (mid % 2 == 0){
                if (nums[mid] == nums[mid + 1]) start = mid + 1;
                else end = mid;
            }
            else{
                if (nums[mid] == nums[mid - 1]) start = mid + 1;
                else end = mid;
            }
        }
        return nums[end];
    }
};
int main(){

    return 0;
}