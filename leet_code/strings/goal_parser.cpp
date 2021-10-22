#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string interpret(string command)
    {
        string result = "";
        for (int i = 0; i < command.length(); i++)
        {
            if(command[i]=='G') result.push_back('G');
            if(command[i]=='(' && command[i+1]==')') result.push_back('o');
            if(command[i]=='(' && command[i+1]==')') result.push_back('o');
            else if(command[i]=='(' && command[i+1]=='a') result+="al";
        }
        return result;
    }
};
int main()
{

    return 0;
}