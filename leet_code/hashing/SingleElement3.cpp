#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        unordered_map<int, int>mp;
        for (auto it : nums) mp[it]++;
        for (auto it : mp){
            if (it.second < 3) ans = it.first;
        }
        return ans;
    }
};
int main(){

    return 0;
}