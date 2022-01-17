#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int i = 0;
        if (s.size() != t.size()) return false;
        unordered_map<char, int>ms, mt;
        while (i < s.size()){
            ms[s[i]]++;
            mt[t[i]]++;
            i++;
        }
        for (auto it : ms){
            if (it.second != mt[it.first]) return false;
        }
        return true;
    }
};
int main(){

    return 0;
}