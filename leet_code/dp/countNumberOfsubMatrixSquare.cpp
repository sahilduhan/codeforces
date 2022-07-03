#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = 0;
        int t[n][m];
        for (int i = 0;i < m;i++){
            for (int j = 0;j < n;j++){
                t[i][j] = matrix[i][j];
            }
        }
        for (int i = 1;i < m;i++){
            for (int j = 1;j < n;j++){
                if (t[i][j] == 1) t[i][j] = min({t[i - 1][j], t[i - 1][j - 1], t[i][j - 1]}) + 1;
            }
        }
        for (int i = 0;i < m;i++){
            for (int j = 0;j < n;j++){
                ans += t[i][j];
            }
        }
        return ans;
    }
};

int main(){

    return 0;
}

