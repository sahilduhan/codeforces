#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        string a = s;
        reverse(a.begin(), a.end());
        int m = s.length(), n = a.length();
        int t[m + 1][n + 1];

        for (int i = 0;i < m + 1;i++){
            for (int j = 0;j < n + 1;j++){
                if (i == 0 || j == 0) t[i][j] = 0;
                if (s[i - 1] == a[j - 1]) t[i][j] = 1 + t[i - 1][j - 1];
                else t[i][j] = 0;
            }
        }


    }
};
int main(){


    return 0;
}