//https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;
 
int main(){

    string s; cin >> s;
    string res = "";
    int tres=0; int dos=0; int uno=0;

    for(char ch : s){
      if(ch == '1'){
        uno++;
      }else if(ch == '2'){
        dos++;
      }else if(ch == '3'){
        tres++;
      }
    }

    for(int i = 0; i < uno; i++){
      res += "1+";
    }
    for(int i = 0; i < dos; i++){
      res += "2+";
    }
    for(int i = 0; i < tres; i++){
      res += "3+";
    }
    res.erase(res.size() - 1);
    cout << res;

}