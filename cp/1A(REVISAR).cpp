#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
  long long int n,m,a;
  cin >> n;
  cin >> m;
  cin >> a;
 
  long long int contador = a;
  long long int aa = a;
 
  long long int i;
  for(i=1; n>a; i++){
    a = a+contador;
  }
  i = i;
  //cout <<i<<endl;
 
  long long int ii;
  for(ii=1; m>aa; ii++){
    aa = aa+contador;
  }
  
  ii = ii;
  //cout <<ii<<endl;
  cout<<i+ii;
}