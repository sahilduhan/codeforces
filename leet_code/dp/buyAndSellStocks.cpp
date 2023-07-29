#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& nums){
    int profit = 0, minEle = nums[0];
    for (int i = 1;i < nums.size();i++){
        int cost = nums[i] - minEle;
        profit = max(profit, cost);
        minEle = min(minEle, nums[i]);
    }
    return profit;
}
int main(){


    return 0;
}