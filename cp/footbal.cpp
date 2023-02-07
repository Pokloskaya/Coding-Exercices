//https://codeforces.com/problemset/problem/96/A
#include <bits/stdc++.h>
using namespace std;

int main(){

    string n; cin >> n;
    bool flag = false;
    int len = n.length();
    int num = stoi(n);
    if(len > 6){
        for(int i = 0; i < len; i++){
            cout << (n[i] + n[i+1] + n[i+2] + n[i+3] + n[i+4] + n[i+5] + n[i+6]) <<endl;
            if(i + 6 > len){
                break;
            }

            if((n[i] + n[i+1] + n[i+2] + n[i+3] + n[i+4] + n[i+5] + n[i+6]) == 0 || (n[i] + n[i+1] + n[i+2] + n[i+3] + n[i+4] + n[i+5] + n[i+6]) == 7){
                flag = true;
            }
        }  
    }
    if(flag) cout << "YES";
    else cout << "NO";
}