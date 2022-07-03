#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int> res;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++){
            m[changed[i]]++;
        }
        sort(changed.begin(), changed.end());
        for (int i = 0; i < n; i++){
            if (m[changed[i] * 2] != 0){
                res.push_back(changed[i]);
                m[changed[i] * 2]--;
                m[changed[i]]--;
            }
        }
        if (res.size() * 2 == changed.size()) return res;
        return {};
    }
};
int main(){

    return 0;
}