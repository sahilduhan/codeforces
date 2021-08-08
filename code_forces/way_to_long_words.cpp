#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 0;
    cin >> size;
    string arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = 0; i < size; i++)
    {
        string str = arr[i];
        if (str.length() > 10)
        {
            string value = to_string(str.length() - 2);
            str.erase(1, str.length() - 2);
            str.insert(1, value);
        }
        cout << str << endl;
    }
    return 0;
}