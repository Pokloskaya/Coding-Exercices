// https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  double n,m,a, resultado;
  cin >> n;
  cin >> m;
  cin >> a;

  double divisionN; double divisionM;
  divisionN = n/a;
  divisionM = m/a;

  if(n + a == 2){
    cout << m;
    exit(0);
  }
 
  if(m + a == 2){
    cout << n;
    exit(0);
  }
  
  if((n == a) && ()){
    
  }
  //si n, m es igual a 'a'
  if(n && m == a){
    cout << 1;
    exit(0);
  }
  
  //----------con enteros 
  int nEntero = int(n);
  int mEntero = int(m);
  int aEntero = int(a);
  int divisionNentero; int divisionMentero;

  divisionNentero = nEntero/aEntero;
  divisionMentero = mEntero/aEntero;

  double divisionNaDouble = divisionNentero;
  double divisionMaDouble = divisionMentero;
  //---------------------

  // resultado = divisionN+divisionM;
  // cout << resultado;  divisionN
  //cout << divisionN;
  if(divisionN > divisionNaDouble){
    divisionNentero++;
  }

  if(divisionM > divisionMaDouble){
    divisionMentero++;
  }

  resultado = divisionNentero+divisionMentero;
  cout << resultado;
}