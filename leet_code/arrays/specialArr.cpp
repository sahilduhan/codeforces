#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        while (n > 0){
            int count = 0;
            for (int i = 0; i < nums.size(); i++){
                if (nums[i] >= n) count++;
            }
            if (count == n) return n;
            n--;
        }
        return -1;
    }
};
int main(){

    return 0;
}