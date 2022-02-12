#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        vector<int> output;
        int n = nums.size();

        for (auto it : nums){
            product *= it;
            output.push_back(product);
        }
        product = 1;
        for (int i = n - 1; i > 0;i--){
            output[i] = output[i - 1] * product;
            product *= nums[i];
        }
        output[0] = product;
        return output;
    }
};
int main()
{

    return 0;
}