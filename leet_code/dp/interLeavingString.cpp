#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int t[101][101];
    int solve(string& s1, string& s2, string& s3, int i, int j, int k){
        if (k == s3.size()) return true;

        if (t[i][j] != -1) return t[i][j];

        bool flag1 = false, flag2 = false;

        if (s1[i] == s3[k]) flag1 = solve(s1, s2, s3, i + 1, j, k + 1);

        if (s2[j] == s3[k]) flag2 = solve(s1, s2, s3, i, j + 1, k + 1);

        return t[i][j] = (flag1 || flag2);
    }
    bool isInterleave(string s1, string s2, string s3) {
        int m = s1.size(), n = s2.size(), p = s3.size();
        if (m + n != p) return false;
        memset(t, -1, sizeof(t));
        return solve(s1, s2, s3, 0, 0, 0);
    }
};
int main(){



    return 0;
}