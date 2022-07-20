#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int t[51][51][51];
    int mod = 1000000007;

    long solve(int i, int j, int m, int n, int maxMove){

        if (i >= m || i < 0 || j >= n || j < 0) return 1;

        if (maxMove <= 0) return 0;

        if (t[i][j][maxMove] != -1) return t[i][j][maxMove];

        long ans = 0;

        ans += solve(i + 1, j, m, n, maxMove - 1);
        ans += solve(i - 1, j, m, n, maxMove - 1);
        ans += solve(i, j + 1, m, n, maxMove - 1);
        ans += solve(i, j - 1, m, n, maxMove - 1);

        return t[i][j][maxMove] = ans % mod;

    }

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(t, -1, sizeof(t));
        return solve(m, n, maxMove, startRow, startColumn) % mod;
    }
};
int main(){


    return 0;
}