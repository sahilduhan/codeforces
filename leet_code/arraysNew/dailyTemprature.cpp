#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> ans(temperatures.size(), 0);
        stack<int> st;

        for (int i = 0; i < temperatures.size(); ++i) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int top = st.top();
                st.pop();
                ans[top] = i - top;
            }
            st.push(i);
        }

        return ans;
    }
};
int main(){


    return 0;
}