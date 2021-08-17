#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num_1 = 0, num_2 = 0;
    cin >> num_1 >> num_2;
    string str_1 = to_string(num_1);
    string str_2 = to_string(num_2);
    string ans;
    for (int i = 0; i < str_1.length(); i++)
    {
        if (str_1[i] == str_2[i]) ans.push_back('0');
        else ans.push_back('1');
    }
    cout<<ans<<endl;
    return 0;
}