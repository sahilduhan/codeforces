#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string ans = "";

        for (int i = 0;i < s.size();i++){
            string temp = "";
            while (i < s.length() and s[i] != ' '){
                temp += s[i];
                i++;
            }
            if (temp.length() != 0) st.push(temp);
        }
        while (!st.empty()){
            if (st.size() == 1) ans += st.top();
            else ans += st.top() + " ";
            st.pop();
        }
        return ans;
    }
};
int main(){


    return 0;
}