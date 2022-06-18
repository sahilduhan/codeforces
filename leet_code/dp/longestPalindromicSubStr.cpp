#include<bits/stdc++.h>
using namespace std;
class Solution{
public:

    // matrix
    int t[1001][1001];

    // check for the string to be a palindrome

    int isPalindrome(string& s, int i, int j){

        if (i >= j) return 1;
        if (t[i][j] != -1) return t[i][j];
        if (s[i] == s[j]) return t[i][j] = isPalindrome(s, i + 1, j - 1);
        return t[i][j] = 0;
    }
    string longestPalindrome(string  s) {
        int maxi = 0;
        string ans;

        // matrix initialisation by -1

        memset(t, -1, sizeof(t));
        for (int i = 0;i < s.size();++i){
            for (int j = i;j < s.size();++j){
                if (isPalindrome(s, i, j)){
                    if (j - i + 1 > maxi){
                        // if the palindrome length is greater than store the value
                        maxi = j - i + 1;
                        ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return ans;
    }
};
int main(){


    return 0;
}