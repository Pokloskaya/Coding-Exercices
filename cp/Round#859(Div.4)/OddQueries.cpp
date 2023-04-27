//https://codeforces.com/contest/1807/problem/D
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int nQueries; cin >> nQueries;
        vector<int> myVector; 

        int number;
        int sumGeneral = 0;
        for(int i = 0; i < n; i++){
            cin >> number;
            sumGeneral += number;
            myVector.push_back(number);
        }

        for(int j = 0; j < nQueries; j++){

            int l; cin >> l; int r; cin >> r; int k; cin >> k;
            int sum = sumGeneral;
            //cout << "Suma original es " << sum << endl;
            
            for(int i = l-1; i < r; i++){
                sum -= myVector[i];
                sum += k;
            }

            //cout << "Resultado de la suma " << sum << endl;

            if(sum % 2 == 0){
                cout << "NO" << endl;
            }else if(sum % 2 != 0){
                cout << "YES" << endl;
            }

        }
        
    }
}