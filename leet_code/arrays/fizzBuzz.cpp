#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> sol;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0) sol.push_back("FizzBuzz");
            else if (i % 3 == 0) sol.push_back("Fizz");
            else if (i % 5 == 0) sol.push_back("Buzz");
            else{
                string s = to_string(i);
                sol.push_back(s);
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}