#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int>mp;
        for (int i = 0; i < deck.size(); i++){
            mp[deck[i]] ++;
        }
        int result = 0;
        for (auto it = mp.begin(); it != mp.end(); it++){
            result = __gcd(result, it->second);
        }
        if (result > 1) return true;
        return false;
    }
};
int main(){

    return 0;
}