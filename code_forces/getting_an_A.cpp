#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >> n;
    vector<int> arr(n,0);
    for(int i = 0; i < n; i++) cin >> arr[i];
 
    auto sum  = accumulate(arr.begin(), arr.end(),0);
    float avg = (float)sum/n;
 
    sort(arr.begin(), arr.end());
    int i = 0;
    while(avg < 4.5){
        sum += 5 - arr[i++];
        avg = (float)sum/n;
    }
    cout << (i > 0 ? i : 0) << endl;
    return 0;
}
