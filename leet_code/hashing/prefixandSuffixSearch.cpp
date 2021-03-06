#include<bits/stdc++.h>
using namespace std;
class WordFilter {
public:
    unordered_map<string, int> mp;
    WordFilter(vector<string>& words) {
        int n = words.size();
        for (int i = 0; i < n; i++){
            string word = words[i];
            for (int j = 0; j < word.size(); j++){
                string prefix = word.substr(0, j + 1);
                for (int k = word.size() - 1; k >= 0; k--){
                    string suffix = word.substr(k);
                    string key = prefix + "#" + suffix;
                    mp[key] = i;
                }
            }
        }
    }

    int f(string prefix, string suffix) {
        string key = prefix + "#" + suffix;
        if (mp.count(key)) return mp[key];
        return -1;
    }
};
int main(){


    return 0;
}