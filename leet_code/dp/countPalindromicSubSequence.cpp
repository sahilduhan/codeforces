#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int t[1001][1001];
    int count(string& s, int i, int j){
        if (i > j) return 0;
        if (i == j) return 1;
        if (t[i][j] != -1) return t[i][j];
        if (s[i] == s[j])return t[i][j] = count(s, i + 1, j) + count(s, i, j - 1) + 1;
        else return t[i][j] = count(s, i + 1, j) + count(s, i, j - 1) - count(s, i + 1, j - 1);
    }
    int countPalindromicSubsequences(string s) {
        memset(t, -1, sizeof(t));
        return count(s, 0, s.size() - 1);
    }
};
int main(){

    return 0;
}