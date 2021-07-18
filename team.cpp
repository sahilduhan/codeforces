#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0;
    cin >> num;
    int digits;
    int ans = 0;
    for (int i = 0; i < num; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> digits;
            sum += digits;
        }
        if(sum >= 2) ans++;
    }
    cout << ans << endl;
    return 0;
}