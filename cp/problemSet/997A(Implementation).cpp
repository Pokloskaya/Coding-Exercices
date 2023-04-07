//https://codeforces.com/problemset/problem/977/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int number; cin >> number;
    int iterations; cin >> iterations;

    for(int i = 0; i < iterations; i++)
        if(number%10 != 0) number--;
        else if(number%10 == 0) number = number/10;
    cout << number;
}