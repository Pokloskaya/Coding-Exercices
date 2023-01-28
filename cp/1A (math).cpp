// https://codeforces.com/problemset/problem/1/A
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  double n,m,a;
  cin >> n >> m >> a;
  int resultadoN = ceil(n/a); int resultadoM = ceil(m/a);
  int resultadoFinal = resultadoN * resultadoM;
  cout << resultadoFinal << endl;
}