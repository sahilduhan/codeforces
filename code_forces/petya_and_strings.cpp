#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.compare(s2) < 0)
        cout << "-1";
    else if (s1.compare(s2) > 0)
        cout << "1";
    else
        cout << "0";
    return 0;
}