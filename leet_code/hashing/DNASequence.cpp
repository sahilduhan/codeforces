#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        unordered_map<string, int>mp;
        vector<string>ans;
        for (int i = 0;i <= n - 10;i++){
            string str = s.substr(i, 10);
            mp[str]++;
            if (mp[str] == 2) ans.push_back(str);
        }
        return ans;
    }
};
int main(){


    return 0;
}