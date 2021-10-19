#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[n] == 0 && flowerbed[n - 1] == 0 || flowerbed[n + 1] == 0)
                return false;
        }
        return true;
    }
};
int main()
{

    return 0;
}