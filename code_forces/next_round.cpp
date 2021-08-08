#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, k, count = 0;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int min_val = arr[k - 1];
    // if (min_val > 0)

    for (int j = 0; j < n; j++)
    {
        if (arr[j] >= min_val && arr[j] > 0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}