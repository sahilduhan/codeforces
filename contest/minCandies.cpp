#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size(), ans = 0;

        sort(cost.begin(), cost.end());
        int i = n - 1;
        while (i >= 0){
            if (i >= 0) ans += cost[i];
            i--;
            if (i >= 0) ans += cost[i];
            i--;
            i--;
        }
        return ans;
    }
};