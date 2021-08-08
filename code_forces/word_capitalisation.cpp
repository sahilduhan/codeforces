#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[0] >= 'A' && str[0] <= 'Z')
        {
            cout << str;
            break;
        }
        else
        {
            str[0] -= 32;
            cout << str;
            break;
        }
    }

    return 0;
}