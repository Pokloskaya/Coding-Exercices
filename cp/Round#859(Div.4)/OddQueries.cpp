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
        for(int i = 0; i < n; i++){
            cin >> number;
            myVector.push_back(number);
        }

        for(int j = 0; j < nQueries; j++){

            int l; cin >> l; 
            int r; cin >> r; 
            int k; cin >> k;

            int sum = 0;
            vector<int> vectorOperations; 

            for(int i = 0; i < n; i++){
                vectorOperations.push_back(myVector[i]);
                sum = sum + vectorOperations[i];
            }

            for(int i = l-1; i <= r-1; i++){
                sum = sum - vectorOperations[i];
                vectorOperations[i] = k;
                sum = sum + vectorOperations[i];
            }

            // for(int i = 0; i < n; i++){
            //     cout <<" "<< vectorOperations[i];
            // }

            // for(int i = 0; i < n; i++){
            //     //cout << "numero de la suma " << vectorOperations[i] << endl;
            //     sum = sum + vectorOperations[i];
            // }

            //cout << "Sum del nQuerie numero: " << j+1 << "sum " << sum << endl;

            if(sum % 2 == 0){
                cout << "NO" << endl;
            }else if(sum % 2 != 0){
                cout << "YES" << endl;
            }

        }
        
    }
}