#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for (auto i : s) mp[i]++;
        int t = mp[s[0]];
        for (auto it : mp) {
            if (it.second != t) return false;
        }
        return true;
    }
};
int main(){

    return 0;
}