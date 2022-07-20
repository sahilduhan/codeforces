#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>>& mat, int i, int j, int prev, vector<vector<int>>& t){
    if (i < 0 or i >= mat.size() or j < 0 or j >= mat[0].size()) return 0;
    if (prev >= mat[i][j]) return 0;
    if (t[i][j] != -1) return t[i][j];
    int down = solve(mat, i + 1, j, mat[i][j], t);
    int up = solve(mat, i - 1, j, mat[i][j], t);
    int right = solve(mat, i, j + 1, mat[i][j], t);
    int left = solve(mat, i, j - 1, mat[i][j], t);
    return t[i][j] = 1 + max({left, right, up, down});
}
int longestIncreasingPath(vector<vector<int>>& matrix) {
    vector<vector<int>> t(matrix.size(), vector<int>(matrix[0].size(), -1));
    int ans = 0;
    for (int i = 0; i < matrix.size(); i++){
        for (int j = 0; j < matrix[0].size(); j++){
            int path = solve(matrix, i, j, -1, t);
            ans = max(ans, path);
        }
    }
    return ans;
}
int main(){


    return 0;
}