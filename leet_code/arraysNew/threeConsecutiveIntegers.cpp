#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long >ans;
        long long d = num / 3;
        if (d + 1 + d + d - 1 == num) {
            ans.push_back(d - 1);
            ans.push_back(d);
            ans.push_back(d + 1);
        }
        return ans;
    }
};
int main(){


    return 0;
}