#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer{{}};
        for (auto num : nums) {
            int size = answer.size();
            for (int i = 0; i < size; i++) {
                answer.push_back(answer[i]);
                answer.back().push_back(num);
            }
        }
        return answer;
    }
};
int main(){

    return 0;
}