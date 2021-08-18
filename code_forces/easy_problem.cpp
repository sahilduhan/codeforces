#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, i = 0, count=0;
    cin >>num;
while(num--){
    cin>>i;
    if(i==1) count++; 
}
if(count>0) cout<<"HARD"<<endl;
else cout<<"EASY"<<endl;
    return 0;
}