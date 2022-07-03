#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool modify = true;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] < nums[i - 1])
            {
                if (modify){
                    if (i - 2 >= 0 and nums[i - 2] > nums[i]) nums[i] = nums[i - 1];
                    modify = false;
                }
                else return false;
            }
        }
        return true;
    }
};
int main(){

    return 0;
}