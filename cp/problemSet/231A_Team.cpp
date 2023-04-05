//https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n; cin >> n;
    int conter = 0;
    for(int i = 0; i < n; i++){
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        if(n1 + n2 + n3 >= 2){
            conter++;
        }
    }
    cout << conter;
}