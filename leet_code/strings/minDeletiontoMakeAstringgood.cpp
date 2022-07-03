#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDeletions(string s) {
        int ans = 0;
        priority_queue<int> pq;
        unordered_map<char, int> m;
        for (auto c : s) m[c]++;
        for (auto x : m) pq.push(x.second);
        while (pq.size() > 1 && pq.top() != 0){
            int temp1 = pq.top();
            pq.pop();
            int temp2 = pq.top();
            if (temp2 == temp1){
                pq.push(temp1 - 1);
                ans++;
            }
        }
        return ans;
    }
};
int main(){

    return  0;
}