#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 0, target, count = 0;
    cin >> size >> target;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < size; j++)
    {
        if (arr[j] >= arr[target])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}