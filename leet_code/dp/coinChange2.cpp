#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int m = coins.size(), n = amount;
        int t[m + 1][n + 1];
        for (int i = 0;i <= m;i++){
            for (int j = 0;j <= n;j++){
                if (i == 0) t[i][j] = 0;
                if (j == 0) t[i][j] = 1;
            }
        }
        for (int i = 0;i < m;i++){
            for (int j = 0;j < n;j++){
                if (coins[i - 1] <= j) t[i][j] = t[i][j - coins[i - 1]] + t[i - 1][j];
                else t[i][j] = t[i - 1][j];
            }
        }
        return t[m][n];
    }
};
int main(){


    return 0;
}