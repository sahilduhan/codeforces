#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, a = 0, b = 0, count = 0;
    cin >> num;
    while (num--)
    {
        cin >> a >> b;
        if(abs(a-b)>=2) count++;
    }
    cout << count << endl;
    return 0;
}