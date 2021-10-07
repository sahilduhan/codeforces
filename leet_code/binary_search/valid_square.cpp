#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int val = sqrt(num);
        if((val*val) == num) return true;
        return false;
    }
};
int main()
{

    return 0;
}