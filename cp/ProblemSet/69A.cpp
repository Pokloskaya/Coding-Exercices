//https://codeforces.com/problemset/problem/69/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n, x, y, z, resultadoX, resultadoY, resultadoZ;
  cin >> n;
  vector<int> xx;
  vector<int> yy;
  vector<int> zz;
 
  for(int i=0; i < n; i++)
  {
    cin >> x; xx.push_back(x);
    cin >> y; yy.push_back(y);
    cin >> z; zz.push_back(z);
  }
 
  resultadoX = accumulate(xx.begin(),xx.end(),0);
  resultadoY = accumulate(yy.begin(),yy.end(),0);
  resultadoZ = accumulate(zz.begin(),zz.end(),0);
 
  if(resultadoX != 0){
    cout << "NO";
    return(0);
  }
 
  if(resultadoY != 0){
    cout << "NO";
    return(0);
  }
 
  if(resultadoZ != 0){
    cout << "NO";
    return(0);
    
  }else{
    cout << "YES";
  }
}