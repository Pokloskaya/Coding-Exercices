#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/71/A 

int main() {
  
  int iteraciones;
  cin >> iteraciones;
  string palabra;
  string palabraNueva;
  vector<string> result;
  
  for(int i=0; i<iteraciones; i++){
    cin >> palabra;
    int ultimo = palabra.size();
    int contador = 0;
    
    for(int i=1; i<palabra.size()-1; i++){
      palabra[i];
      contador = contador + 1;
      
    }
 
    //cout<<"----------------------"<<endl;
    if(contador > 8){
     // cout << palabra[0];  
     // cout << contador;  
     // cout << palabra[ultimo-1]; 
      palabraNueva = palabra[0] + to_string(contador) + palabra[ultimo-1];
  
      //cout << palabraNueva;
      result.push_back(palabraNueva);
    }else{
      result.push_back(palabra);
    }
  }
  //Imprimir resultado
    for (int i = 0; i < iteraciones; i++){
        cout<<result[i]<<endl;
    }
}