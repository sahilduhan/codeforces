#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans = "";
        int n = strs.size();
        for (int i = 0;i < strs[0].size();i++)
        {
            string x = strs[0];
            string y = strs[n - 1];
            if (x[i] == y[i]) ans.push_back(x[i]);
            else break;
        }
        return ans;
    }
};
int main(){

    return 0;
}