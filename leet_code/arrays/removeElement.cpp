#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        for(auto it: nums) {
            if(it==val) ans++;
        }
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size()- ans;
    }
};
int main(){

    return 0;
}