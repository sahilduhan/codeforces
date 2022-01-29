#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> expected;
        for (auto it : heights) expected.push_back(it);
        sort(expected.begin(), expected.end());
        for (int i = 0; i < expected.size();++i){
            if (heights[i] != expected[i]) count++;
        }
        return count;
    }
};
int main(){

    return 0;
}