#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for (int i = 0;i < ranges.size();i++){
            for (int j = 0;j < ranges.size();j++){
                if (ranges[i][j] == left || ranges[i][j] == right) return true;
            }
        }
        return false;
    }
};
int main(){


    return 0;
}