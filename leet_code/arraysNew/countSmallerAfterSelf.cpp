#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size(), count = 0;
        for (int i = 0;i < n;i++){
            for (int j = i;j < n;j++){
                if (nums[j] > nums[i]) count++;
            }
            if (count > 0) ans.push_back(count);
            else ans.push_back(count);
        }
        return ans;
    }
};
int main(){


    return 0;
}