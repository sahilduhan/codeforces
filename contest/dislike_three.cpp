#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n; int i = 0;
    while (n--)
    {
        i++;
        while (1)
        {
            if (i % 3 != 0 && i % 10 != 3)
                break;
            i++;
        }
    }
    cout << i << endl;
}

int main()
{
    int t;
    cin >> t; while (t--)
        solve();
    return 0;
}