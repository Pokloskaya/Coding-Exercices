//https://codeforces.com/problemset/problem/61/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string differ_bits(string a, string b) {
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}


int main(){
    string a, b;
    cin >> a; 
    cin >> b;
    cout << differ_bits(a,b) << endl;
}