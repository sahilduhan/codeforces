#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int ans = 0, empty = 1;
    int solve(int i, int j, vector<vector<int>>& grid, int count){
        if (i == grid.size() || j == grid[0].size() || i < 0 || j < 0 || grid[i][j] == -1) return 0;
        if (grid[i][j] == 2){
            if (count == empty) ans++;
            return;
        }
        grid[i][j] = -1;

        solve(i + 1, j, grid, count + 1);
        solve(i - 1, j, grid, count + 1);
        solve(i, j + 1, grid, count + 1);
        solve(i, j - 1, grid, count + 1);

        grid[i][j] = 0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int s1 = 0, s2 = 0;
        for (int i = 0;i < grid.size();i++){
            for (int j = 0;j < grid[0].size();j++){
                if (grid[i][j] == 1) s1 = i, s2 = j;
                if (grid[i][j] == 0) empty++;
            }
        }
        solve(s1, s2, grid, 0);
        return ans;
    }
};
int main(){

    return 0;
}