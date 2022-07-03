#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, int u, vector<bool>& visited){
        visited[u] = 1 ;
        int n = isConnected.size() ;
        for (int i = 0 ; i < n;i++){
            if (!visited[i] and isConnected[u][i] == 1){
                dfs(isConnected, i, visited) ;
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size() ;
        vector<bool>visited(n, 0) ;
        int ans = 0 ;
        for (int i = 0 ; i < n;i++){
            if (!visited[i]){
                dfs(isConnected, i, visited);
                ans ++ ;
            }
        }
        return ans ;
    }
};
int main(){


    return 0;
}