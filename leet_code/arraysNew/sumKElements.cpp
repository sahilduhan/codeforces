#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        int ans = 0, sum = 0;
        for (auto it : nums){
            sum += it;
            if (mp.find(sum - k) != mp.end()){
                ans ++;
            }
            if (sum == k) ans++;
        }
    }
};
int main()
{

}