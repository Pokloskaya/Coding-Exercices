//https://codeforces.com/problemset/problem/1633/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int iterations, i, number, numberMas, numberMenos;
  cin >> iterations;
  vector<int> vec;
while(iterations--)
{    
    cin >> number; 
    int x = number%7;
    int y = 7-x;
    int xx = number%10;
    if(number%7==0) number=number;
    else if(xx+y<10) number+=y;
    else number-=x;
    cout << number << endl;
      
    
    
  }

}