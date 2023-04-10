// https://codeforces.com/problemset/problem/268/A

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int teams, host, guest; cin >> teams;
    int result = 0;
    vector<int> vhost;
    vector<int> vguest;
    for(int i=0; i<teams; i++) {
        cin >> host >> guest;
        vhost.push_back(host);
        vguest.push_back(guest);
    }
    
    for(int i=0; i<teams; i++) {
        for(int j=0; j<teams; j++) {
            if(vhost[i] == vguest[j]){
                result += 1;
            }
        }
    }
    cout << result;
}