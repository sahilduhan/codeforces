#include<bits/stdc++.h>
using namespace  std;
class Solution {
public:
    int removePalindromeSub(string s) {
        for (int i = 0;i < s.size();i++){
            if (s[i] != s[s.size() - i - 1]) return 2;
        }
        return 1;
    }
};
int main(){


}