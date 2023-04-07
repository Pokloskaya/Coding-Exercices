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
        int flag = len; //quizas tiene que ser len+1
        int flagFirst = 0;
        vector<string> result;

        for(int i = 0; i < len; i++){
            if(ogNumber[i] <= addNumber[0]){
                flag = i;
            }
            equisde = ogNumber[i];
            result.push_back(equisde);
        }

        result.insert(result.begin() + flag + addNumber);        
        
        for (int i = 0; i < len+1; i++){
            cout<<result[i];
        }
    }
}

// 1 <- meter

// 828169 <- numero

// 8281691 <-bueno
// 8281169


// 8281271277321 <- bueno
// 8281127127732

// 27240273

// 272402731
// 272410273