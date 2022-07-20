#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string& S, int i, int j){
    while (i < j){
        if (S[i++] != S[j--]) return false;
    }
    return true;
}
string longestPalin(string S) {
    // code here
    string ans = S.substr(0, 1);
    for (int i = 0;i < S.size();i++){
        for (int j = i + 1;j < S.size();j++){
            if (isPalindrome(S, i, j) and ans.size() < j - i + 1) ans = S.substr(i, j - i + 1);
        }
    }
    return ans;
}
int main(){

    return 0;
}