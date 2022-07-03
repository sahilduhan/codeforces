#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0;
        stack<char>st;
        for (auto it : s){
            if (it == '(') st.push(it);
            else if (!st.empty() and it == ')') st.pop();
            else if (st.empty() and it == ')') ans++;
        }
        return st.size() + ans;
    }
};
int main(){


    return 0;
}