#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        if (nums[end] < nums[start]) return nums[start];
        while (start < end) {
            int mid = start + (end - start) / 2;
            

        }
    }
};
int main(){



    return 0;
}