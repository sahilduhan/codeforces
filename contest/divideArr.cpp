#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int size = nums.size();
        if (size % 2 != 0) return false;
        unordered_map<int, int>mp;
        for (auto it : nums) mp[it]++;
        for (auto it : mp){
            if (it.second % 2 != 0) return false;
        }
        return true;
    }
};
int main(){

    return 0;
}