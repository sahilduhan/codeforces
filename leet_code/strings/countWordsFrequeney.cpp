#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string, int> mp;
        priority_queue<pair<int, string>> pq;
        for (int i = 0; i < messages.size(); ++i) {
            auto message = messages[i];
            auto sender = senders[i];
            mp[sender] += count(begin(message), end(message), ' ') + 1;
        }
        for (auto it : mp) pq.push({it.second, it.first});
        return pq.top().second;
    }
};
int main(){


}