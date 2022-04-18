#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans = "";
        unordered_map<char, int>mp;
        for (auto i : s) mp[i]++;
        for (auto it : mp) ans += mp[it.first];
        return ans;
    }
};
int main(){

    return 0;
}