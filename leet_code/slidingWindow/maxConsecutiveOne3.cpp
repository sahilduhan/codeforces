#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int oneCount = 0, zeroCount = 0, ans = 0;
        int i = 0, j = 0;
        while (j < nums.size()){
            if (nums[j] == 0) zeroCount++;
            while (zeroCount > k){
                if (nums[i] == 0) {
                    zeroCount--;
                }
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
int main(){


    return 0;
}