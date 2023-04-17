//https://codeforces.com/problemset/problem/41/A
#include <iostream> 
#include <string>
using namespace std;
 
int main() {
    string s, s2; cin >> s >> s2;
    int flag = 0; int len = s.length(); int lenIterator = len-1;

    for(int i = 0; i < len; i++){
        if(s[i] != s2[lenIterator]){
            flag = 1;
            break;
        }
        lenIterator--;
    }
    puts(flag == 0 ? "YES":"NO");
}