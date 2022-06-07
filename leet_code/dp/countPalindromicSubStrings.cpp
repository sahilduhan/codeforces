#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int t[1001][1001];
    bool isPalindromic(string s, int i, int j){

        if (i >= j) return t[i][j] = 1;
        if (t[i][j] != -1) return t[i][j];
        if (s[i] == s[j]) return t[i][j] = isPalindromic(s, i + 1, j - 1);
        else t[i][j] = 0;

    }
    int countSubstrings(string s) {
        memset(t, -1, sizeof(t));
        int n = s.size(), count = 0;
        for (int i = 0;i < n;i++){
            for (int j = i;j < n;j++){
                if (isPalindromic(s, i, j)) count++;
            }
        }

        return count;
    }
};
int main(){


    return 0;
}