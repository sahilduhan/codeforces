#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string str;
    cin >> str;
    for (int i = 0;i < str.length();i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            count++;
            break;
        }
    }
    if (count > 0) printf("YES\n");
    else printf("NO\n");
    return 0;

}