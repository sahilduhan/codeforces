#include<bits/stdc++.h>
int mod = (1e9) + 7;
long long int solve(int i, int j, int n, int B, vector<vector<int>>& v){
    if (i < 0 || j < 0 || i >= n || j >= n || v[i][j] == -1) return 0;
    if (v[i][j] != -1) return v[i][j];
    if (i == 0 and j == 0) return 1;
    long long right = solve(i - 1, j, n, v);
    long long left = solve(i, j - 1, n, v);
    return v[i][j] = ((right % mod) + (left % mod));
}
int Solution::solve(int A, int B) {
    vector<vector<int>>v(A, vector<int>(A, -1));
    int mid = A / 2;
    for (int i = 0;i < A;i++){
        for (int j = 0;j < A;j++){
            if (i >= mid - B and i < mid + B){
                if (j >= mid - B and j <= mid + B) v[i][j] = 0;
            }
        }
    }
    return solve(A - 1, A - 1, A, B, v);
}