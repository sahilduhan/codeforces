#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count = 0;
        for (int i = 0; i < nums.size();i++){
            for (int j = i;j < nums.size();j++){
                if (nums[i] + nums[j] == target) count++;
            }
        }
        return count;
    }
};
int main(){

    return 0;
}