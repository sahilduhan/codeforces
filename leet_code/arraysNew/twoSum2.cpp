#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int s = 0, e = numbers.size() - 1;
        while (s <= e) {
            if (numbers[s] + numbers[e] == target && s != e) {
                ans.push_back(s + 1);
                ans.push_back(e + 1);
            }
            if (numbers[e] + numbers[s] < target) {
                s++;
            }
            else e--;
        }
        return ans;
    }
};
int main(){


    return 0;
}