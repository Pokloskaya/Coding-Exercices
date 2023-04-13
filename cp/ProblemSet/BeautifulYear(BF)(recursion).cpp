//https://codeforces.com/problemset/problem/271/A
#include <iostream>
#include <string>
using namespace std;

string check(string s){
    for(int i=0; i<s.length(); i++){
        for(int j=i+1; j<s.length(); j++){
            if(s[i] == s[j]){
                int num = stoi(s);
                num += 1;
                return check(to_string(num));
            }
        }
    }
    return s;
}

int main() {
    string s; cin >> s;
    int num = stoi(s) + 1;
    cout << check(to_string(num)) << endl;
}