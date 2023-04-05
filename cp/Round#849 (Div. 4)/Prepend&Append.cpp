//https://codeforces.com/contest/1791/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
  
	for(int z = 0; z < testCase; z++){
        int len; cin >> len;
        string n; cin >> n;

        if(len == 1){
            cout << n << endl;
            continue;
        }

        if(len == 2){
            if(n[0] == n[1]){
                cout << 2 << endl;  //si los dos son iguales, no pudieron empezar en cero
            }  
            else{
                cout << 0 << endl; 
            } 
            continue;
        }

        if(len == 3){
            if(n[0] == n[2]) cout << n << endl;
            else cout << 1 << endl;
            continue;
        }
        
        int mit = len/2;  ///si es impar es imposible que haya empezado en cero!
        int contador = 0; //vamos a ver los extremos e ir ocntando


        int j = len-1;
        for(int i = 0; i < mit; i++)
        {
            if(n[i] == n[j]){
                // cout << n[i] << " " << n[j] << "<-- Son iguales!" << endl; 
                // cout << i << " " << j << "<-- Son posicion!" << endl; 
                contador = (j-i)+1;
                cout << contador << endl; 
                continue;
            }
            j--;
        }      
    }
    return 0;
}