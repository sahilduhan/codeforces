#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        for (int i = 0; i < 3; i++){
            if (n / 3 == 1){
                break;
                return true;
            }
        }
        return false;
    }
};
int main()
{

    return 0;
}