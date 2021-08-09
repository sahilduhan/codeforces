#include <bits/stdc++.h>
using namespace std;
int translation(string str_1, string str_2)
{
    if(str_1.length() != str_2.length()) return -1;
    for (int i = 0; i < str_1.length(); i++)
    {
        if (str_1[i] != str_2[str_2.length() - i - 1]) return -1;
    }
    return 0;
}
int main()
{
    string str_1;
    string str_2;
    cin >> str_1 >> str_2;
    int ans = translation(str_1, str_2);
    if (ans != -1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}