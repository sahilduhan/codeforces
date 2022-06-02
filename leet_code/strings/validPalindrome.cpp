#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0) return true;
        string ans = "";
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for (int i = 0;i < s.size();i++){
            if ((s[i] >= 'a' and s[i] <= 'z') || (s[i] >= '0' and s[i] <= '9')){
                ans += s[i];
            }
        }
        string rev = ans;
        reverse(ans.begin(), ans.end());
        return ans == rev;
    }
};
int main(){
    string s = "0P";

    return 0;
}