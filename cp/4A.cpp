#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int kilo;
    cin >> kilo;

    if(kilo == 2){
      cout << "NO";
    }
    else if(kilo % 2 == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}