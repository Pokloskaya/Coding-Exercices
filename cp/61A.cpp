//https://codeforces.com/problemset/problem/61/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<string> vec;

  string uno = "1";
  string cero = "0";

  string numerosUno, numerosDos; 
  cin >> numerosUno;
  cin >> numerosDos;

  for(int i = 0; i<numerosUno.length(); i++){
    
      if(numerosUno[i] == numerosDos[i]){
         // cout << "uno";
        vec.push_back(cero);
        
      }else{
        vec.push_back(uno);
      }
      //vec.push_back(temp);
  }

  for (int i = 0; i < vec.size(); i++) {
      cout << vec.at(i);
  }
  
}