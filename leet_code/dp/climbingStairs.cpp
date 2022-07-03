#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int t[46];
    int climbStairs(int n) {
        if (t[n] != 0) return t[n];
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2;
        return t[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }
};
int main(){


    return 0;
}