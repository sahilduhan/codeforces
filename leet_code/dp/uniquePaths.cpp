#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> t(m, vector<int>(n, 1));
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                t[i][j] = t[i - 1][j] + t[i][j - 1];
        return t[m - 1][n - 1];
    }
};
int main(){

    return 0;
}