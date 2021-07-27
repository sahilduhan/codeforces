#include <bits/stdc++.h>
using namespace std;
int weight(int a, int b, int count = 1)
{
    if (a == b)
        return 1;
    while (a < b)
    {
        a *= 3;
        a *= 2;
        count++;
    }
    return count;
}
int main()
{
    int count;
    int a, b;
    cin >> a >> b;
    cout << weight(a, b);
    // cout << count;
    return 0;
}