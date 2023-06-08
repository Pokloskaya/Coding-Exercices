\//https://codeforces.com/contest/1767/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a[6];
        for(int i=0; i<6; i++){
            cin>>a[i];
        }

        if(a[0] != a[2] && a[0] != a[4] && a[2] != a[4])
          cout << "yes" << endl;
        else if(a[1] != a[3] && a[1] != a[5] && a[3] != a[5])
          cout << "yes" << endl;
        else
          cout << "no" << endl;
    }
    return 0;
}