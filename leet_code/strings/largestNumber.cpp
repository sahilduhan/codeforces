#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool compare(string a, string b){
        return (a + b > b + a);
    }
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        for (int i = 0;i < nums.size();i++) temp.push_back(to_string(nums[i]));
        sort(temp.begin(), temp.end(), compare);
        string ans = "";
        for (int i = 0;i < temp.size();i++) ans += temp[i];
        if (ans.size() == 0)return "0";
        return ans;
    }
};
int main(){


    return 0;
}