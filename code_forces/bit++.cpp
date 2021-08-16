#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, ans = 0;
    cin >> num;
    string arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        if (arr[i] == "++X"|| arr[i] == "X++") ans++;
        if(arr[i] == "--X" || arr[i] == "X--") ans--;
    }
    cout << ans << endl;
    return 0;
}