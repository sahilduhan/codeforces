#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s;
        for (auto it : nums1) s.insert(it);
        vector<int> result;
        for (int it : nums2)
        {
            if(s.find(it)!= s.end()){
            result.push_back(it);
            s.erase(it);
            } 
            
        }
        return result;
    }
};
int main()
{

    return 0;
}