#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        string result = "";
        int count = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i]== ' ') count++;
            if (count == k) break;
            result += s[i];
        }
        return result;
    }
};
int main()
{

    return 0;
}