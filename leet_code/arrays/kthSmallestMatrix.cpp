#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        for (auto it : matrix) {
            for (auto it2 : it) {
                pq.push(it2);
            }
        }
        int x = pq.size() - k;
        while (x--){
            pq.pop();
        }
        return pq.top();
    }
};
int main(){

}