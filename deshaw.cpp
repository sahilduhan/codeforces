#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1, 2, 3, 4, 5};


    int f = arr[0];
    int s = arr[1];

    int maxELe = *max_element(arr.begin(), arr.end());

    vector<int>ans(arr.size());
    ans.push_back(maxELe);

    return 0;
}