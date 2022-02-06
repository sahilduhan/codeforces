#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstOccurence(vector<int>& nums, int val){
        int res = -1;
        int start = 0, end = nums.size() - 1;
        while (start < end){
            int mid = start + (end - start) / 2;
            if (val == nums[mid]) {
                res = mid;
                end = mid - 1;
            }
            else if (val < nums[mid]) end = mid - 1;
            else start = mid + 1;
        }
        return res;
    }
    int lastOccurence(vector<int>& nums, int val){
        int start = 0, end = nums.size() - 1, res = -1;

        while (start < end){
            int mid = start + (end - start) / 2;
            if (val == nums[mid]){
                res = mid;
                start = mid + 1;
            }
            if (val < nums[mid]) end = mid - 1;
            else start = mid + 1;
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        int first = firstOccurence(nums, target);
        int last = lastOccurence(nums, target);
        res[0] = first;
        res[1] = last;
        return res;
    }
};
int main(){


    return 0;
}