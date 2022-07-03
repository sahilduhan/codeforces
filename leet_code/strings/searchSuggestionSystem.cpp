#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>>ans;
        vector<string>temp;
        string curr = "";
        sort(products.begin(), products.end());
        for (auto it : searchWord){
            curr += it;
            temp.clear();
            for (auto s : products){
                if (s.substr(0, curr.size()) == curr) temp.push_back(s);
                if (temp.size() == 3) break;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
int main(){


    return 0;
}