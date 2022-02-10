#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>equal;
        vector<int> small;
        vector<int> greater;
        vector<int> res;
        for (auto it : nums) {
            if (it < pivot) small.push_back(it);
            else if (it == pivot) equal.push_back(it);
            else if (it > pivot) greater.push_back(it);
        }
        for (auto it : small) res.push_back(it);
        for (auto it : equal) res.push_back(it);
        for (auto it : greater) res.push_back(it);
        return res;
    }
};
int main(){

    return 0;
}