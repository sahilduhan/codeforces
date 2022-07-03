#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = *min_element(nums.begin(), nums.end()), ans = 0;
        for (auto it : nums) ans += abs(m - it);
        return ans;
    }
};
int main(){

    return 0;
}