#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int t[101][10001];
    Solution(){
        memset(t, -1, sizeof(t));
    }
    int superEggDrop(int e, int f) {
        if (f == 0 || f == 1) return f;

        if (e == 1) return f;

        if (t[e][f] != -1) return t[e][f];

        int ans = INT_MAX;
        int l = 1, h = f;
        int low, high;

        while (l <= h){
            int mid = (l + h) / 2;
            int low = superEggDrop(e - 1, mid - 1);
            int high = superEggDrop(e, f - mid);
            if (low < high) l = mid + 1;
            else h = mid - 1;
            int temp = 1 + max(low, high);
            ans = min(ans, temp);
        }
        return t[e][f] = ans;
    }
};
int main(){

    return 0;
}