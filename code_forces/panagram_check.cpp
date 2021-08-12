#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 0;
    cin >> num;
    string str[num];
    for (int i = 0; i < num; i++)
        cin >> str[i];
    for (int i = 0; i < num; i++)
        cout << str[i];
    // while (str[num] != NULL)
    // {
    //     if (str[num] >= 'A' && str[num] <= 'z')
    //     {
    //     }
    //     num++;
    // }

    return 0;
}