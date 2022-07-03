#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.size() < k) return false;
        unordered_map<char, int> mp;
        for (auto it : s) mp[it]++;
        int oddCount = 0;
        for (auto itr = mp.begin(); itr != mp.end(); itr++) {
            if (itr->second & 1) oddCount++;
        }
        if (oddCount <= k) return true;
        return false;
    }
};
int main(){


    return 0;
}