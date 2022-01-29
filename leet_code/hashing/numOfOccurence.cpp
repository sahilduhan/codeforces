#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        set<int> st;
        for (auto it : arr) mp[it]++;
        for (auto it : mp) st.insert(it.second);
        if (mp.size() == st.size()) return true;
        return false;
    }
};
int main(){

    return 0;
}