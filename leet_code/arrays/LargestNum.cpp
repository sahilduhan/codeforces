#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string result = "";
        for (int i = 0; i < nums.size(); i++) {
            string sample = to_string(nums[i]);
            result += sample;
        }
        sort(result.begin(), result.end(), greater<int>());
        return result;
    }
};
int main(){

    return 0;
}