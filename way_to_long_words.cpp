#include <bits/stdc++.h>
using namespace std;
int count_string(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        count++;
    }
    return count;
}
void insert_value(string str)
{
    int value = count_string(str);
    for (int i = 0; i < value; i++)
    {
        if (i > 4)
        {
            int ans = value - 2;
            string value = to_string(ans);
            str.erase(1, str.length() - 2);
            str.insert(1, value);
        }
    }
    cout << str << endl;
}
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
    insert_value(str);
    return 0;
}