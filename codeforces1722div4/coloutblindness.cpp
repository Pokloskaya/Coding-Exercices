#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> vec;
  
  int testCase, rows, contador;
  string stringOne, stringTwo, R, G, B;
  cin >> testCase;

  R = "R";
  G = "G";
  B = "B";
  
  while(testCase--){

    cin >> rows;
    cin >> stringOne;
    cin >> stringTwo;
    contador = 0;

    for(int i = 0; i < rows; i++){
      
      if(stringOne[i] != stringTwo[i]){
        
            if(stringOne[i] = R && stringTwo[i] = G){
                contador += 1;
            }
            if(stringOne[i] = R && stringTwo[i] = B){
                contador += 1;
            }
            if(stringOne[i] = G && (stringTwo[i] = R){
                contador += 1;
            }
            if(stringOne[i] = B && stringTwo[i] = R){
                contador += 1;
            }
      }
    }
    
  }  

  
}