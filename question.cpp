#include<iostream>
using namespace std;
template<class T>
void square( T x)
{
    cout<<"The square is"<<x<<" = "<<x*x<<endl;
}
template<class T>
void sum_arr( T * arr , int n)
{
    T ans = 0;
    for(int i = 0 ; i<n ; i++)
    {
        ans = ans + arr[i];
    }
    cout<<"The sum_arr of elements - "<<ans<<endl;
}

int main()
{
    int i = 12;
    float j = 15.5;
    square(i);
    square(j);
    int arr1[4] = { 1,2 , 8 , 9};
    float arr2[4] = { 11.2,2.8 , 8.5 , 9.7};
    sum_arr(arr1 , 4);
    sum_arr(arr2 , 4);
    return 0;
}