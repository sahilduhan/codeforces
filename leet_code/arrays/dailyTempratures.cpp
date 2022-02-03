#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int high = 0, low = 1;
        vector<int> ans;
        int size = temperatures.size() - 1;
        while (high != size){
            if (low < high) ans.push_back(high - low);
            if (high <= low){
                while (high < low) high++;
                ans.push_back(high - low);
                high = low + 1;
            }
            low++;
            high++;
        }
    }
};
int main(){


    return 0;
}