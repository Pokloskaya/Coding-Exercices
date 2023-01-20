#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/266/A

int main() {

  vector<string> vec;
  int i, counter, numberStones;
  counter = 0;
  string colors;

  cin >> numberStones;
  cin >> colors;
  
  for(i = 0; i < numberStones; i++){
    if(colors[i] == colors[i+1]){
      counter++;
    }
  }
  cout << counter;

}