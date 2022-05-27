#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if ((needle == "" && haystack == "") || needle == "") return 0;
        return haystack.find(needle);
    }
};
int main()
{

    return 0;
}