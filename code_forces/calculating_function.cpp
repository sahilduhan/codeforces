#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num = 0, sum = 0;
    cin >> num;
    if(num%2==0) cout<<num/2;
    else cout<<-((num+1) / 2);
    return 0;
}