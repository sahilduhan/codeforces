#include<bits/stdc++.h>
using namespace std;class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "";
        vector<string>v;
        for (int i = 1;i <= n;i++) s += to_string(i);
        for (int i = 1;i < s.size();i++) v.push_back(next_permutation(s.begin(), s.end()));

    }
};
int main(){


    return 0;
}