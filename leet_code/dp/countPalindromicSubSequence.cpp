#include<bits/stdc++.h>
using namespace std;

long long m = 1e9 + 7;
int dp[1001][1001];
long long int cps(string& s, int i, int j)
{
    if (i > j) return 0;
    if (i == j) return 1;
    if (dp[i][j] != -1) return dp[i][j];
    if (s[i] == s[j]) return  dp[i][j] = (1 + cps(s, i + 1, j) + cps(s, i, j - 1)) % m;
    else return dp[i][j] = (m + cps(s, i + 1, j) + cps(s, i, j - 1) - cps(s, i + 1, j - 1)) % m;
}
long long int  countPS(string s){
    memset(dp, -1, sizeof(dp));
    return cps(s, 0, s.size() - 1);
}
int main(){

    return 0;
}