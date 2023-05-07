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
    vector<int> myVector;
    while(t--){
        int len; cin >> len; 
        int bin;
        int maxBlank = 0;
        int blank = 0; 
        for (int i = 0; i < len; i++)
        {
            cin >> bin; 
            myVector.push_back(bin);
            if(bin == 0){
                blank++;
                if(blank > maxBlank){
                    maxBlank = blank;
                }
            }else{
                blank = 0;
            }
        }

        // for (int i = 0; i < len; i++)
        // {
        //     //cout << "El contenido del vector es " << myVector[i] << endl;
        //     if(myVector[i] == 0){
        //         blank++;
        //         if(blank > maxBlank){
        //             maxBlank = blank;
        //         }
        //     }else{
        //         blank = 0;
        //     }
            
        // }
        cout << maxBlank << endl;   
    }
    
}
