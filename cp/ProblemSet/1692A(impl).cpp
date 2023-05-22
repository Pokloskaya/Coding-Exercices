//https://codeforces.com/contest/1692/problem/A
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

int solve(vector<int> myVector){
    int result = 0;
    for(int i = 1; i < 4; i++){
        if(myVector[i] > myVector[0]) result++;
    }

    return result;
}

int main(){
    int t; cin >> t;
    while(t--){
        vector<int> myVector;
        for(int i = 0; i < 4; i++){
            int number; cin >> number;
            myVector.push_back(number);
        }
        cout << solve(myVector) << endl;
    }
    
}
