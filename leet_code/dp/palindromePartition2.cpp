#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int t[2001][2001];
    int minCut(string s) {
        int n = s.size();
        memset(t, -1, sizeof(t));
        return solve(s, 0, n - 1);

    }
    int solve(string& s, int i, int j)
    {
        if (i >= j) return 0;
        if (t[i][j] != -1) return t[i][j];
        if (isPalindrome(s, i, j)) return 0;
        int ans = INT_MAX;
        for (int k = i;k < j;k++){
            if (isPalindrome(s, i, k)){
                int temp = 1 + solve(s, k + 1, j);
                ans = min(ans, temp);
            }
        }
        return t[i][j] = ans;
    }
    bool isPalindrome(string& s, int i, int j)
    {
        while (i < j){
            if (s[i++] != s[j--]) return false;
            // i++;
            // j--;
        }
        return true;
    }
};
int main(){

    return 0;
}