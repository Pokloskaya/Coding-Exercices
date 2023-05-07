//https://codeforces.com/contest/1829/problem/0
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
        string str; cin >> str; 
        int dif = 0;
        if(str[0] != 'c') dif ++;
        if(str[1] != 'o') dif ++;
        if(str[2] != 'd') dif ++;
        if(str[3] != 'e') dif ++;
        if(str[4] != 'f') dif ++;
        if(str[5] != 'o') dif ++;
        if(str[6] != 'r') dif ++;
        if(str[7] != 'c') dif ++;
        if(str[8] != 'e') dif ++;
        if(str[9] != 's') dif ++;
        cout << dif << endl;
    }
    
}
