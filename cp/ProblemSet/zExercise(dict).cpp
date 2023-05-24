#include <iostream>
#include <string>
#include <cstring>
#include <map>
using namespace std;

int main(){
    map<string, int> m;
    m["A"] = 1; m["J"] = 1; m["S"] = 1;
    m["B"] = 2; m["K"] = 2; m["T"] = 2;
    m["C"] = 3; m["L"] = 3; m["U"] = 3;
    m["D"] = 4; m["M"] = 4; m["V"] = 4;
    m["E"] = 5; m["N"] = 5; m["Ñ"] = 5; m["W"] = 5;
    m["F"] = 6; m["O"] = 6; m["X"] = 6;
    m["G"] = 7; m["P"] = 7; m["Y"] = 7;
    m["H"] = 8; m["Q"] = 8; m["Z"] = 8;
    m["I"] = 9; m["R"] = 9;

    // int B = 2, K = 2, T = 2;
    // int C, L, U = 3;
    // int D, M, V = 4;
    // int E, N, Ñ, W = 5;
    // int F, O, X = 6;
    // int G, P, Y = 7;
    // int H, Q, Z = 8;
    // int I, R = 9;

    string nombre; cin >> nombre;
    int l = nombre.length();; 
    int sum = 0;
    int value;
    for(int i = 0; i < l; i++){
        string key(1, nombre[i]);
        value = m[key];
        sum += value;
    }
    cout << sum << endl;
}