#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, e = nums.size() - 1;
        while (l < e){
            int mid = l + (e - l) / 2;
            if (nums[e] == nums[mid]) e = e - 1;
            else if (nums[e] > nums[mid]) e = mid;
            else l = mid + 1;
        }
        return nums[l];
    }
};
int main(){

    return 0;
}