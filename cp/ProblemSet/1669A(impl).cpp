//https://codeforces.com/contest/1669/problem/A
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()
//cout << "k2: " << k2 << endl;
//set<int> mySet; <------- conjuntos
//vector<int> myVector; <------- vectores
//cout << "debuggear: " << variable << endl;

int main(){
    int t; cin >> t;
    while(t--){
        int x; cin >> x; //1600≤rating≤1899
        if(x <= 1399) cout << "Division 4" << endl;
        if(x >= 1400 && x <= 1599) cout << "Division 3" << endl;
        if(x >= 1600 && x <= 1899) cout << "Division 2" << endl;
        if(x >= 1900) cout << "Division 1" << endl;
    }
}