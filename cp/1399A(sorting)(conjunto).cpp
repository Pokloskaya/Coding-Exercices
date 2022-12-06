//https://codeforces.com/problemset/problem/1399/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    set<int> conjunto;  //using it cuz it sorts internally and we already can ignore duplicates according to question
    for(int i=0;i<n;i++){
        int number;
        cin>>number;
        conjunto.insert(number);
    }
    while(conjunto.size()>1){
        int num=*conjunto.begin();
        if(conjunto.find(num+1)==conjunto.end()){  //if the next consecutive does not exist return NO
            cout<<"NO";
            return;
        }
        conjunto.erase(num);
    }
    cout<<"YES";
}

int main(){
    int ite;
    cin>>ite;
    while(ite--){
        solve();
    }
}