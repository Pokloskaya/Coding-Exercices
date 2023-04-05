// Given two sequences, find the length of the longest subsequence present in both of them. 
// A subsequence is a sequence that can be derived from another sequence 
// by deleting some or no elements without changing the order of the remaining elements.

#include <iostream>
#include <string>
using namespace std;

string X, Y;
int m, n;
int lookup[101][101];

int lcs(int i, int j) {
    if (i == 0 || j == 0) {
        return 0;
    }
    if (lookup[i][j] != -1) {
        return lookup[i][j];
    }
    if (X[i-1] == Y[j-1]) {
        lookup[i][j] = 1 + lcs(i-1, j-1);
    } else {
        lookup[i][j] = max(lcs(i, j-1), lcs(i-1, j));
    }
    return lookup[i][j];
}

int main() {
    cin >> X >> Y;
    m = X.length();
    n = Y.length();
    memset(lookup, -1, sizeof(lookup));
    cout << lcs(m, n) << endl;
    return 0;
}
