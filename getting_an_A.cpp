#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, count = 0;
    float sum = 0;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    // cout << final_val(arr, num, sum);
    return 0;
}