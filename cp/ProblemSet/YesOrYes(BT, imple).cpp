//https://codeforces.com/problemset/problem/1703/A
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
//cout << "k2: " << k2 << endl;
//set<int> mySet; <------- conjuntos
//vector<int> myVector; <------- vectores
//cout << "debuggear: " << variable << endl;



int main(){
    int testCases; cin >> testCases;
    while(testCases--){
        string t; cin >> t;
        for(int i = 0; i < 3; i++){
            t[i] = tolower(t[i]);
        }
        if(t == "yes"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

}
