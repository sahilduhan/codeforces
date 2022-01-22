#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> mp;
        for (int i = 0; i < sentence.length(); i++){
            mp[sentence[i]]++;
        }
        if (mp.size() == 26) return true;
        return false;
    }
};
int main(){

    return 0;
}