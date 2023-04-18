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
        // (1 << len) is a bit shift operation where the number 1 is shifted to the left by len bits, which is equivalent to raising 2 to the power of len. 
        // For example, if len = 3, then (1 << len) = 8 because 1 shifted left 3 bits gives 1000 in binary which is equal to 8 in decimal
        for(int i=0; i < (1 << len); i++) {
            //cout << "value of i " << i << endl;
            string s = "";
            for(int j=0; j < len; j++) {
                //cout << "value of j " << i << endl;
                if(i & (1 << j)) { //checks if the j-th bit of the binary representation of i is set to 1 or not  
                    cout << "value of j-th bit " << (1 << j) << endl;
                    s += "4";
                } else {
                    s += "7";
                }
                // cout << "value of j " << i << "value of s: " << s << endl;
            }
            combinations.push_back(s);
        }
    }
 
    for(int i=0; i < combinations.size()-1; i++) {
        //cout << combinations[i] << endl;
        if(stoi(n) % stoi(combinations[i]) == 0){ //si pongo eso en una linea, no funciona
            almostLucky = 1; 
            break;
        } 
    }

    puts(almostLucky == 1 ? "YES":"NO");
    return 0;
}