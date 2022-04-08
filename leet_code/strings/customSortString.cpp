#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string customSortString(string order, string s) {
        map<char, int>mp;
        string ans = "", temp = "";
        for (auto it : s) mp[it]++;
        for (auto it : order){
            if (mp.find(it) != mp.end()) ans += it;
            else temp += it;
        }
        return ans + temp;
    }
};
int main(){


    return 0;
}