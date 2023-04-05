//https://codeforces.com/contest/1790/problem/0
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string input; cin >> input;
        string pi = "314159265358979323846264338327";
        int contador  = 0;

        for(int i = 0; i < input.length(); i++){
            if(input[i] == pi[i]) contador = contador + 1;
            else break;
        }
        cout << contador << endl;
    }
    return 0;
}