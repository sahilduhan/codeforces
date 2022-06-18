#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDistance(string word1, string word2) {

        int m = word1.length();
        int n = word2.length();

        int t[m + 1][n + 1];

        for (int i = 0;i < m + 1;i++) t[i][0] = i;
        for (int j = 0;j < n + 1;j++) t[0][j] = j;

        for (int i = 1;i < m + 1;i++){
            for (int j = 1;j < n + 1;j++){

                if (word1[i - 1] == word2[j - 1]) t[i][j] = t[i - 1][j - 1];
                else t[i][j] = 1 + min(t[i][j - 1], min(t[i - 1][j], t[i - 1][j - 1]));
            }
        }
        return t[m][n];
    }
};
int main(){


    return 0;
}