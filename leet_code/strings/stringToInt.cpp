#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        string m = "";
        while (i < s.size()){
            if (!m.empty() && s[i] == ' ') break;
            if (s[i] != ' ') m.push_back(s[i]);
            i++;
        }
        if (m == "") return 0;
        stringstream ss(m);
        int ans = 0;
        ss >> ans;
        return ans;

    }
};
int main(){

    return 0;
}