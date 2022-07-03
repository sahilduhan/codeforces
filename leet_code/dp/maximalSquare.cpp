#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int t[301][301];
    int solve(int i, int j, vector<vector<char>>& matrix){
        if (i < 0 || j < 0 || i >= matrix.size() || j >= matrix[0].size() || matrix[i][j] == '0') return 0;
        if (t[i][j] != -1) return t[i][j];
        return t[i][j] = 1 + min(solve(i + 1, j, matrix), min(solve(i + 1, j + 1, matrix), solve(i, j + 1, matrix))) ;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = INT_MIN;
        memset(t, -1, sizeof(t));
        for (int i = 0;i < m;i++){
            for (int j = 0;j < n;j++){
                if (matrix[i][j] == '1') ans = max(ans, solve(i, j, matrix));
            }
        }
        return ans == INT_MIN ? 0 : ans * ans;
    }
};
int main(){

    return 0;
}