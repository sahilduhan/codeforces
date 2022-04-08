#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int i = 0, sum = 0, s = costs.size();
        while (i < s){
            sum += costs[i];
            if (sum > coins) break;
            i++;
        }
        return i;
    }
};
int main(){


    return 0;
}