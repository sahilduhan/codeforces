#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int dp[m + 1][n + 1];

        for (int i = 0;i < m + 1;i++){
            for (int j = 0;j < n + 1;j++){
                if (i == 0 || j == 0) dp[i][j] = 0;

                else if (nums1[i - 1] == nums2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;

                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[m][n];
    }
};
int main(){


    return 0;
}