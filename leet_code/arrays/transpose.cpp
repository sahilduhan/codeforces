#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>ans(m, vector<int>(n));
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m; j++){
                ans[i][j] = matrix[j][i];
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}