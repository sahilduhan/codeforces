#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        map<int, int> m;
        for (auto i : nums) {
            m[nums[i]]++;
        }
        for (auto it : m){
            if (it.second == 1){
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};
int main(){

    return 0;
}