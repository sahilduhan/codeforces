#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
double knightProbability(int n, int moves, int row, int col){
        vector<vector<vector<double>>> dp(moves + 1, vector<vector<double>> (n, vector<double>(n, -1)));
        return solve(n, moves, row, col, dp);
    }    
private:
    double solve(int n, int moves, int i, int j, vector<vector<vector<double>>>& dp)
    {
        if (i < 0 || i >= n || j < 0 || j >= n) return 0;
        if (moves == 0) return 1;
        
        if (dp[moves][i][j] != -1) return dp[moves][i][j];
        
        double total =    solve(n, moves - 1, i - 2, j + 1, dp)
                        + solve(n, moves - 1, i - 1, j + 2, dp)
                        + solve(n, moves - 1, i + 1, j + 2, dp) 
                        + solve(n, moves - 1, i + 2, j + 1, dp)
                        + solve(n, moves - 1, i + 2, j - 1, dp) 
                        + solve(n, moves - 1, i + 1, j - 2, dp)
                        + solve(n, moves - 1, i - 1, j - 2, dp) 
                        + solve(n, moves - 1, i - 2, j - 1, dp);
            
        total = total / 8;
        return dp[moves][i][j] = total;
    }
};
int main(){

    return 0;
}