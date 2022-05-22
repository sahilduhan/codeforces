#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int m = coins.size(), n = amount;
        int t[m + 1][n + 1];

        for (int i = 0; i <= m; i++){
            for (int j = 0; j <= n; j++){

                if (j == 0) t[i][j] = 0;

                else if (i == 0) t[i][j] = 1e5;

                else if (coins[i - 1] > j) t[i][j] = t[i - 1][j];

                else t[i][j] = min(1 + t[i][j - coins[i - 1]], t[i - 1][j]);
            }
        }
        if (t[m][n] == 1e5) return -1;
        return t[m][n];
    }
};
int main(){


    return 0;
}