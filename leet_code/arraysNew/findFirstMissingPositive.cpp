#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        int minimum = INT_MAX;
        for (auto it : nums){
            if (it <= 0) continue;
            s.insert(it);
            if (it < minimum) minimum = it;
        }
        if (minimum > 1) return 1;
        for (int i = 0 ; i < nums.size(); i++){
            if (s.find(++minimum) == s.end()) return minimum;
        }
        return 0;
    }
};
int main(){

    return 0;
}