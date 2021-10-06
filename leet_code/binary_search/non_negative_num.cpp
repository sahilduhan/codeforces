#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int countNegatives = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j]<0) countNegatives++;
            }
        }
        return countNegatives;
    }
};
int main()
{

    return 0;
}