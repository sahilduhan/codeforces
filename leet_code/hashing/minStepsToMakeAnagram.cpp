#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int>mp;
        int ans = 0;
        for (int i = 0;i < s.size();i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for (auto it : mp){
            if (it.second > 0) ans += it.second;
        }
        return ans;
    }
};
int main(){

    return 0;
}