#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 1 and nums[0] == target) return 0;

        int n = nums.size();
        int low = 0;
        int high = n - 1;

        while (low <= high){
            int mid = (low + high) / 2;
            if (nums[mid] == target) return mid;
            if (nums[low] <= nums[mid]){
                if (nums[low] <= target and nums[mid] >= target) high = mid - 1;
                else low = mid + 1;
            }
            else{
                if (nums[mid] <= target and nums[high] >= target) low = mid + 1;
                else high = mid - 1;
            }
        }
        return -1;
    }
};
int main(){

    return 0;
}