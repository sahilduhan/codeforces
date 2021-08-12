#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, ans=0;
    cin >> num;
    string arr[num];
    for (int i = 0; i < num; i++) cin >> arr[i];
    for (int i = 0; i < num; i++) {
        if(arr[i] =="Tetrahedron" ) ans+=4;
        else if(arr[i]=="Cube") ans+=6;
        else if(arr[i]=="Octahedron") ans+=8;
        else if(arr[i]=="Dodecahedron") ans+=12;
        else if(arr[i]=="Icosahedron") ans+=20;
    }
    cout<<ans<<endl;
    return 0;
}