#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool solve(string& s1, string& s2){
        for (int i = 0; i < s1.size(); i++){
            if (s1[i] < s2[i]) return false;
        }
        return true;
    }

    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return solve(s1, s2) || solve(s2, s1);
    }
};
int main(){

    return 0;
}