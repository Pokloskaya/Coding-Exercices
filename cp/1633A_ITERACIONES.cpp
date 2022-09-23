//https://codeforces.com/problemset/problem/1633/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

  int iterations, i, number;
  cin >> iterations;
  vector<int> vec;
  
  for(i = 0; i < iterations; i++){

    cin >> number;

    
    while(number % 7 != 0){
    
      number = number+1;

      //cout << number << endl;
      
    }

    if(number % 7 == 0){ 
      vec.push_back(number);
    }
  }

  for (int i = 0; i < vec.size(); i++) {
      cout << vec.at(i) << endl;
  }
  
}