#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>ans;
        for (int i = 1;i <= n;i++){
            if (n % i == 0) ans.push_back(i);
        }
        return  ans[k];
    }
};
int main(){

    return 0;
}