//https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int Limak, Bob, fichas, resultado;
    cin >> Limak;
    cin >> Bob;
    //limak <= Bob
    for(int i = 1; Limak < Bob; i++){
        Limak = Limak * 3;
        Bob = Bob * 2;
        resultado = i;
    }
    if(Limak < Bob){

    }
    
    cout << resultado;
}