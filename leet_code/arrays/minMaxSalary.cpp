#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        int maxSalary = INT_MIN, minSalary = INT_MAX, sum = 0;
        for (int i = 0; i < salary.size(); i++) {
            sum += salary[i];
            maxSalary = max(maxSalary, salary[i]), minSalary = min(minSalary, salary[i]);
        }
        return (sum - maxSalary - minSalary) / (double)(salary.size() - 2);
    }
};
int main(){

    return 0;
}