#include <bits/stdc++.h>
#include <cctype>
using namespace std;
class Solution
{
public:
    string toLowerCase(string s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};
int main()
{

    return 0;
}