#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int, int>>>q;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         int sum=nums1[i]+nums2[j];
        //         if(q.size()<k){
        //             q.push({sum,{nums1[i],nums2[j]}});
        //         }
        //         else if(q.top().first>sum){
        //                 q.pop();
        //                 q.push({sum,{nums1[i],nums2[j]}});
        //             }
        //         else{
        //             break;
        //         }
        //     }
        // }
        for (auto it1 : nums1){
            for (auto it2 : nums2){
                q.push({it1 + it2, {it1, it2}});
                if (it1 + it2 > q.top().first){
                    q.pop();
                    q.push({it1 + it2, {it1, it2}});
                }
                else break;
            }
        }
        vector<vector<int>>ans;
        while (!q.empty()){
            ans.push_back({q.top().second.first, q.top().second.second});
            q.pop();
        }
        return ans;
    }
};
int main(){

    return 0;
}