// https://codeforces.com/problemset/problem/122/A
#include <iostream> 
#include <vector>
#include <string>
using namespace std;

int main() {
    string n; cin >> n;
    int lucky = 1; int almostLucky = 1;
    for(int i = 0; i < n.length(); i++){
        if(n[i] != '4' && n[i] != '7') lucky = 0; break;
    }
    //cout << lucky << endl;
    if(stoi(n) % 4 == 0 || stoi(n) % 7 == 0) almostLucky = 1;
    else almostLucky = 0;
    puts(lucky == 1 || almostLucky == 1 ?"YES":"NO");
}