#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mod = 1e9 + 7;
    int solve(vector<vector<int>>& grid, int row, int col, int prev, vector<vector<int>>& t){
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || prev >= grid[row][col]) return 0;

        if (t[row][col] != -1) return t[row][col];

        int ans = 0;

        ans += solve(grid, row + 1, col, grid[row][col], t) % mod;
        ans += solve(grid, row - 1, col, grid[row][col], t) % mod;
        ans += solve(grid, row, col + 1, grid[row][col], t) % mod;
        ans += solve(grid, row, col - 1, grid[row][col], t) % mod;

        return t[row][col] = (1 + ans) % mod;
    }
    int countPaths(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>>t(m, vector<int>(n, -1));
        int ans = 0;
        for (int row = 0;row < m;row++){
            for (int col = 0;col < n;col++){
                int temp = solve(grid, row, col, -1, t);
                ans = (ans + temp) % mod;
            }
        }
        return ans;
    }
};
int main(){


    return 0;
}