#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool static compare(string s1, string s2){
        return s1.size() > s2.size();
    }
    int minimumLengthEncoding(vector<string>& words) {
        int ans = 0;
        sort(words.begin(), words.end(), compare);
        unordered_set<string>st;
        if (words.size() == 0) return 0;
        for (auto it : words){
            if (st.count(it) == 0) ans += it.length() + 1;
            for (int i = 0;i < it.size();i++) st.insert(it.substr(i, it.size()));
        }
        return ans;
    }
};
int main(){


    return 0;
}