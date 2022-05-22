#include<bits/stdc++.h>
using namespace std;
class Solution {
    int count(int n)
    {
        int t[n + 1];
        t[0] = t[1] = 1;

        for (int i = 2;i <= n;++i)
        {
            t[i] = 0;
            for (int j = 0;j < i;++j)
                t[i] += t[j] * t[i - j - 1];
        }
        return t[n];
    }
public:
    int numTrees(int n) {
        return count(n);
    }
};
int main(){


    return 0;
}