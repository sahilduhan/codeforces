#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    int length(string word1, string word2){
        vector<int>arr(26, false);
        for (int i = 0;i < word1.length();i++) arr[word1[i] - 'a'] = true;
        for (int i = 0;i < word2.length();i++){
            if (arr[word2[i] - 'a'] == true) return 0;
        }
        return word1.length() * word2.length();
    }
public:
    int maxProduct(vector<string>& words) {
        int finalAns = 0, n = words.size();
        for (int i = 0;i < n;i++){
            for (int j = i + 1;j < n;j++){
                finalAns = max(finalAns, length(words[i], words[j]));
            }
        }
        return finalAns;
    }
};
int main(){


    return 0;
}