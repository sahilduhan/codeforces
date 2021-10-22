#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int n = s.length();
        int x, y;
        x = 0, y = 0;
        n = n / 2;
        for (int i = 0; i < n; i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') x++; 
        }

        for (int i = n; i < 2 * n; i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') y++;
        }
        return x == y;
    }
};
int main()
{

    return 0;
}