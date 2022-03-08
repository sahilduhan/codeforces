#include<bits/stdc++.h>
using namespace std;
class comp{
public:
    bool operator()(int a, int b){
        string one = to_string(a);
        string two = to_string(b);
        return one + two > two + one;
    }
};
class Solution {
public:
    string largestNumber(vector<int>& nums) {

    }
};
int main(){

    return 0;
}