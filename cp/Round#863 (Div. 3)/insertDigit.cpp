#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int testCases; cin >> testCases;
    while(testCases--){
        int len; cin >> len;
        string addNumber; cin >> addNumber;
        string ogNumber; cin >> ogNumber;
        string equisde;
        vector<string> result;

        for(int i = 0; i < len; i++){
            if(ogNumber[i] > addNumber[0]){
                result.push_back(addNumber); //lo que pasa es que no puedo comparar con numero de x position
            }
            equisde = ogNumber[i];
            result.push_back(equisde);
        }
        
        for (int i = 0; i < len+1; i++){
            cout<<result[i]<<endl;
        }
    }
}