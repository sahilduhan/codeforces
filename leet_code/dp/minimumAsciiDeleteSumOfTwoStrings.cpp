#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.size(), n = s2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        for (int i = 0;i <= n;i++){
            for (int j = 0;j <= m;j++){

                if (i == 0 || j == 0) dp[i][j] = 0;
                else if (s1[j - 1] == s2[i - 1]) dp[i][j] = s1[j - 1] + dp[i - 1][j - 1];
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

            }
        }
        int sum1 = 0, sum2 = 0;
        for (char ch : s1) sum1 += ch;
        for (char ch : s2) sum2 += ch;
        return sum1 + sum2 - 2 * dp[n][m];
    }
};
int main(){

    return 0;
}