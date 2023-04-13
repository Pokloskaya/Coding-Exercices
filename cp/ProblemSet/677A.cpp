#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/677/A
 
int main() {
 
  vector<int> vec;
  int n, h, genteAltura;
  int contador = 0;
  cin >> n>> h;
  
  for(int i = 0; i < n; i++){
    cin >> genteAltura;
    vec.push_back(genteAltura);
  }
 
  for (int i = 0; i < vec.size(); i++) {
      if(vec[i] <= h){
        contador = contador + 1;
      }else{
        contador = contador + 2;
      }
  }
  cout << contador;
}