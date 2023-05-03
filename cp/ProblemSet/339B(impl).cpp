//https://codeforces.com/problemset/problem/339/B
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll m; cin >> m;

    ll time = 0;
    ll position = 1;
    ll house;
    for(int i = 0; i < m; i++){
        cin >> house;
        if(position <= house){
            time += house - position;
            position = house;
        }else if(position > house){
            time += (n - position) + house;
            position = house;
        }
    }
    cout << time << endl;
}