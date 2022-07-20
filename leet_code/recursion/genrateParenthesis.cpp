#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> res;
    void getPare(string s, int open, int close){
        if (open > close or open < 0 or close < 0) return ;
        if (open == 0 and close == 0) {
            res.push_back(s);
            return;
        }
        s += '(';
        getPare(s, open - 1, close);
        s.pop_back();
        s += ')';
        getPare(s, open, close - 1);
    }

    vector<string> generateParenthesis(int n) {
        getPare("", n, n);
        return res;
    }
};

int main(){

    return 0;
}