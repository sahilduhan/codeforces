#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestMerge(string word1, string word2) {
        string ans = "";
        while (!word1.empty() and !word2.empty()){
            if (word1.front() > word2.front()){
                ans += word1.front();
                word1.erase(word1.begin());
            }
            else if (word2.front() > word1.front()){
                ans += word2.front();
                word2.erase(word2.begin());
            }
        }
        ans += word1;
        ans += word2;
        return ans;
    }
};
int main(){


    return 0;
}