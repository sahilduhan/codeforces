#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkIfExist(vector<int> &v)
    {
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size() - 1; i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                if ((2 * v[i]) == v[j] or v[i] == (2 * v[j]))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{

    return 0;
}