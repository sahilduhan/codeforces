#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int len = 0;
    int low_case = 0, high_case = 0;
    while (len < word.length())
    {
        if (word[len] >= 'a' && word[len] <= 'z')
            low_case++;
        if (word[len] >= 'A' && word[len] <= 'Z')
            high_case++;
        len++;
    }
    if (high_case > low_case)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
                word[i] -= 32;
        }
    }
    else if (low_case >= high_case)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
                word[i] += 32;
        }
    }
    cout << word;
    return 0;
}