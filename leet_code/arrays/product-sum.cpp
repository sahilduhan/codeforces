#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, m = 0, prod = 1;
        while (n > 0){
            m = n % 10;
            sum += m;
            prod *= m;
            n = n / 10;
        }
        return prod - sum;
    }
};
int main(){


    return 0;
}