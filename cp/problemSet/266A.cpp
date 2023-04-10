//https://codeforces.com/problemset/problem/266/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> vec;
  string colors;
  int i, counter, numberStones;
  counter = 0;

  cin >> numberStones >> colors;
  
  for(i = 0; i < numberStones; i++){
    if(colors[i] == colors[i+1]){
      counter++;
    }
  }
  cout << counter;
}