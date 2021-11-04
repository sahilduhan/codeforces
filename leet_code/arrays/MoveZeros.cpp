#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int n :nums) {
            if (n != 0) nums[i++] = n;
        }
        for(;i<nums.size();i++) {
            nums[i] = 0;
        } 
    }
};
int main()
{
    return 0;
}