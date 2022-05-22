#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int ans = INT_MIN, prod = 1;
        for (int i = 0;i < arr.size();i++){
            prod *= arr[i];
            ans = max(ans, prod);
            if (prod == 0) prod = 1;
        }

        prod = 1;

        for (int i = arr.size() - 1;i >= 0;i--){
            prod *= arr[i];
            ans = max(ans, prod);
            if (prod == 0) prod = 1;
        }

        return ans;
    }
};
int main(){


}