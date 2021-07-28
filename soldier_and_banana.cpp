#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, final_val = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        final_val += k * i;

    if (final_val > n)
        cout << abs(n - final_val) << endl;
    else
        cout << "0";
    return 0;
}