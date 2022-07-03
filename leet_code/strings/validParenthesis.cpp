#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for (auto it : s){
            if (it == '(' || it == '[' || it == '{'){
                a.push(it);
            }
            else{
                if (a.empty()) return false;
                if (it == ')' && a.top() == '(' || it == ']' && a.top() == '[' || it == '}' && a.top() == '{') a.pop();
                else return false;
            }
        }
        if (a.empty()) return true;
        else return false;
    }
};
int main(){


    return 0;
}