#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1686A

int main()
{
    int t;
    cin>>t;
    while(t--){ //
        int n;
        cin>>n; //cantidad de elementos
        vector<double> v(n);
        for(int i = 0; i < n; i++) {double x; cin>>x; v[i] = x;}
        if(n== 1){
            cout<<"YES"<<endl;
            continue;
        }

        bool flag = false; 
        for(int i= 0; i < n; i++){
            double sum = 0;
            for(int j = 0; j < n ;j++){
                if(i == j) continue;
                sum += v[j]; //sumar todos los elementos del vector 'v'
            }
            
            if(sum / (n - 1) == v[i]){ //solucion
                flag = true; break;
            }
        }
        
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
        
    }
 
    return 0;
}