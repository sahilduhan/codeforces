#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) m[nums[i]]++;

        for (auto it : m){
            if (it.second > nums.size() / 2) return it.second;
        }
        return -1;
    }
};
int main()
{

    return 0;
}