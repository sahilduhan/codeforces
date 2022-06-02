#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubstrings(string s) {
        int m = s.size(), n = s.size();
        bool t[m + 1][n + 1];
        for (int i = 0;i < m + 1;i++){
            for (int j = 0;j < n + 1;j++){
                if (i == j) t[i][j] = true;
                if (s[i] == s[j]) t[i][j] = true;
                else if (s[i] == s[j] && t[i - 1][j + 1] == true) t[i][j] = true;
            }
        }
        int count = 0;
        for (int i = 0;i < m + 1;i++){
            for (int j = 0;j < n + 1;j++){
                if (t[i][j] == true) count++;
            }
        }
        return count;
    }
};
int main(){


    return 0;
}