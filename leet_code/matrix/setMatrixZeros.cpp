#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setRowZeroes(vector<vector<int>>& matrix, int r){
        for (int i = 0; i < matrix[0].size(); i++) matrix[r][i] = 0;
    }
    void setColZeroes(vector<vector<int>>& matrix, int c){
        for (int i = 0; i < matrix.size(); i++) matrix[i][c] = 0;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> pos;

        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j < matrix[i].size(); j++){
                if (matrix[i][j] == 0){
                    pos.push_back(make_pair(i, j));
                }
            }
        }
        for (int i = 0; i < pos.size(); i++){
            setRowZeroes(matrix, pos[i].first);
            setColZeroes(matrix, pos[i].second);
        }
    }
};
int main(){


    return 0;
}