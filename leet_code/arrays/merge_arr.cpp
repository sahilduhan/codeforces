#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n){
    int total = m + n;
    int nums2_index = 0;
    if (m == 0) nums1 = nums2;
    else
    {
        for (int i = m; i < total; i++)
        {
            nums1[i] = nums2[nums2_index];
            nums2_index++;
        }
        sort(nums1.begin(), nums1.end());
    }
}
int main()
{
}