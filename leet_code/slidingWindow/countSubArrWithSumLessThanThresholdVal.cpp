#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0, j = 0, sum = 0, ans = 0;
        while (j < arr.size()){
            int avg = 0;
            sum += arr[j];
            if (j - i + 1 < k) j++;
            else if (j - i + 1 == k){
                avg = sum / k;
                if (avg >= threshold) ans++;
                sum -= arr[i];
                j++;
                i++;
            }
        }
        return ans;
    }
};
int main(){


    return 0;
}