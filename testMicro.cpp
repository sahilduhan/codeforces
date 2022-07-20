#include<bits/stdc++.h>

using namespace std;
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solution(string& S) {
    // write your code in C++14 (g++ 6.2.0)
    int rightPointer = 0;
    int finalAns = 0;
    set<char>st;
    while (rightPointer < (int)S.size()){
        if (st.find(S[rightPointer]) != st.end()){
            finalAns++;
            st.clear();
        }
        st.insert(S[rightPointer]);
        rightPointer++;
    }
    return finalAns + 1;
}


// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


int solution(vector<int>& A, vector<int>& B) {
    // write your code in C++14 (g++ 6.2.0)
    int arrSize = A.size();
    int minValToBeRejected = INT_MAX;
    for (int i = 0; i < arrSize; i++) {
        if (A[i] == B[i]) continue;
        int rejectElement = (A[i] < B[i]) ? A[i] : B[i];
        minValToBeRejected = (rejectElement < minValToBeRejected) ? rejectElement : minValToBeRejected;
    }
    return (minValToBeRejected == INT_MAX) ? A[arrSize - 1] + 1 : minValToBeRejected;
}



int main(){
}
