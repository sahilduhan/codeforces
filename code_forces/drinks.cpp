#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0;
    long double ans=0;
    cin >> num;
    double arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        ans += arr[i];
    }
    cout << ans / num << endl;
    return 0;
}