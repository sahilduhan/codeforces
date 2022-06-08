#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string str) {
        int i = 0;
        int j = str.size() - 1;
        while (i < j){
            if (str[i] != str[j])  return false;
            i++;
            j--;
        }
        return true;
    }

    void solve(vector<vector<string>>& ans, vector<string>& temp, int i, string s) {

        if (i == s.size()) {
            ans.push_back(temp);
            return;
        }
        for (int k = i; k < s.size(); k++) {
            string str = s.substr(i, k - i + 1);
            if (isPalindrome(str)){
                temp.push_back(str);
                solve(ans, temp, k + 1, s);
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> temp;
        vector<vector<string>> ans;
        solve(ans, temp, 0, s);
        return ans;
    }
};
int main(){


    return 0;
}