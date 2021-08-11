#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a = 0, b = 0, left;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int sum = a + b;
        left = abs(b - a);
        cout << left;
    }

    return 0;
}