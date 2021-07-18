#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int count = 0;
    string str;
    int num = 0;
    cin >> num;
    for (int k = 0; k < num; k++)
    {
        cin >> str;
    }

    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        count++;
    }
    for (int j = 0; j < count; j++)
    {
        if (j > 4)
        {
            string value = to_string(count - 2);
            str.erase(1, str.length() - 2);
            str.insert(1, value);
        }
    }
    cout << str << endl;
    return 0;
}