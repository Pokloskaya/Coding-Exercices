//https://codeforces.com/contest/1352/problem/A
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
        vector<int> result;
        string n; cin >> n;
        int nInt = stoi(n);
        //10**4 -> 10000
        int k = 1;
        int contador = 1;
        for (size_t i = n.size()-1; i < n.size(); i--)
        {
            
            if(stoi(string(1, n[i])) != 0){
                result.push_back(stoi(string(1, n[i])) * pow(10, k-1));
                contador++;
            }           
            k++;
        }
        
        for (int i = 0; i < result.size(); i++)
        {
            cout << " " << result[i];
        }
        

    }
    
}
