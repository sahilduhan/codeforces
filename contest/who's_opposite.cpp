#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, a = 0, b = 0, c = 0;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        cin >> a >> b >> c;
        int pos = 2 * abs(b - a);
        int ans = 0;
        if (a > pos || b > pos || c > pos) ans = -1;
        else
        {
            ans= c+ pos/2;
            if(ans> pos)
            {
                ans= c-pos/2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}