#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long long int ans = 0;
        while (x != 0){
            ans = ans * 10 + x % 10;
            x /= 10;
            if (ans > INT_MAX or ans < INT_MIN) return 0;
        }
        return ans;
    }
};
int main(){

    return 0;
}