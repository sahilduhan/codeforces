#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int i = 0;
        while (arr[i] < arr[i + 1])
        {
            i++;
        }
        return i;
    }
};
int main()
{

    return 0;
}