// https://codeforces.com/problemset/problem/122/A
#include <iostream> 
#include <vector>
#include <string>

using namespace std;
 
int main() {
    vector<string> luckyNumbers;
    vector<string> combinations;
    string n; cin >> n;
    int len = n.length();
    int lucky = 1; int almostLucky = 0;

    for(int i = 0; i < len; i++){
        if(n[i] != '4' && n[i] != '7'){
            lucky = 0; 
            break;
        } 
    }

    if(lucky == 0){
        cout << len << endl;
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
                if(stoi(n) % stoi(combinations[i]) == 0){
                    cout << combinations[i] << endl;
                    almostLucky = 1; 
                    break;
                }
            }
        }
    }

    // for(int i=0; i < combinations.size()-1; i++) {
    //     cout << combinations[i] << endl;
    //     if(stoi(n) % stoi(combinations[i]) == 0){
    //         almostLucky = 1; 
    //         //break;
    //     }
    // }
    puts(lucky == 1 || almostLucky == 1 ?"YES":"NO");

    return 0;
}