#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, count_1 = 0, count_2 = 0;
    cin >> num;
    string str;
    cin>>str;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'A') count_1++;
        if(str[i] == 'D') count_2++;
    }
    if(count_1 == count_2) cout<<"Friendship"<<endl;
    if(count_1 > count_2) cout<<"Anton"<<endl;
    if(count_1 < count_2) cout<<"Danik"<<endl;
    return 0;
}