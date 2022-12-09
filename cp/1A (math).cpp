// https://codeforces.com/problemset/problem/1/A
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
int main() {
 
  double n,m,a;
  cin >> n;
  cin >> m;
  cin >> a;

  long long resultadoN = ceil(n/a);
  long long resultadoM = ceil(m/a);

  long long resultadoFinal = resultadoN * resultadoM;

  cout << resultadoFinal << endl;
  
}