#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int i, j, k;
        i = j = k = 0;
        int n = nums1.size();
        int m = nums2.size();
        while (i < n && j < m){

            if (nums1[i] < nums2[j]) ans.push_back(nums1[i++]);
            else ans.push_back(nums2[j++]);

        }
        for (;i < n;i++) ans.push_back(nums1[i]);
        for (;j < m;j++) ans.push_back(nums2[j]);

        int length = ans.size();
        if (length % 2 == 1) return ans[length / 2];
        else return (double)(ans[length / 2] + ans[(length / 2) - 1]) / 2;
    }
};
int main(){


    return 0;
}