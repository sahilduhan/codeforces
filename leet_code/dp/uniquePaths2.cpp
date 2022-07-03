#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int t[101][101];

    int solve(vector<vector<int>>& grid, int m, int n, int i, int j) {

        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 1)return 0;
        if (i == m - 1 && j == n - 1) return 1;
        if (t[i][j] != -1) return t[i][j];
        int a = solve(grid, m, n, i + 1, j);
        int b = solve(grid, m, n, i, j + 1);
        return t[i][j] = a + b;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        memset(t, -1, sizeof(t));
        return solve(grid, m, n, 0, 0);
    }
};
int main(){


    return 0;
}