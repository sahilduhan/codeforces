#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++){
                ans[j][i]=matrix[i][j];
            }
        }
        return ans; 
    }
};
int main()
{

    return 0;
}