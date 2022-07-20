#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int> v){
        for (auto x : v){
            if (x != 0) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int a = s1.size();int b = s2.size();
        if (a > b) return false;
        vector<int> v(26, 0);
        for (auto it : s1) v[it - 'a']++;
        for (int i = 0;i < a;i++) v[s2[i] - 'a']--;
        if (check(v)) return true;

        for (int i = a;i < b;i++)
        {
            v[s2[i] - 'a']--;
            v[s2[i - a] - 'a']++;
            if (check(v)) return true;
        }
        return false;
    }
};
int main(){


    return 0;
}