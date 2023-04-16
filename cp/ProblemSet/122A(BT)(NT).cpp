// https://codeforces.com/problemset/problem/122/A
#include <iostream> 
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    vector<string> combinations;
    string n; cin >> n;
    int len = n.length();
    int almostLucky = 0;
 
    len++;
    while(len--){
        for(int i=0; i < (1 << len); i++) {
            string s = "";
            for(int j=0; j < len; j++) {
                if(i & (1 << j)) {
                    s += "4";
                } else {
                    s += "7";
                }
            }
            combinations.push_back(s);
        }
    }
 
    for(int i=0; i < combinations.size()-1; i++) {
        cout << combinations[i] << endl;
        if(stoi(n) % stoi(combinations[i]) == 0){ //si pongo eso en una linea, no funciona
            almostLucky = 1; 
            break;
        } 
    }

    puts(almostLucky == 1 ? "YES":"NO");
    return 0;
}