#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> v;
        for(int i=0;i<n;i++){
            if(i%3==0) v.push_back("Fizz");
            if(i%5==0) v.push_back("Buzz");
            if(i%3==0 && i%5==0) v.push_back("FizzBuzz");
            else v.push_back(to_string(i));
        }
        return v;
    }
};
int main()
{

    return 0;
}