//https://codeforces.com/problemset/problem/617/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int result(int number){
    if(number % 5 == 0) return number/5;
    else return number/5 + 1;
}
int main() {
    int testCases; cin >> testCases; //not necesary 
    while(testCases--){
        int number; cin >> number;
        //from 1 to 5 steps
        cout << result(number) << endl;
    }
}