#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int peakIndex = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if(arr[i]<arr[i+1]) peakIndex +=1;
        }
        return peakIndex;
    }
};
int main()
{

    return 0;
}