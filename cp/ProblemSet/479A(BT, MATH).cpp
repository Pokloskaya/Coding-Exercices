#include <iostream> 
#include <vector>
#include <string>
using namespace std;

//https://codeforces.com/problemset/problem/479/A
int main() {
    vector<int> results;
    int a,b,c; cin >> a >> b >>c;

    results.push_back(a+b+c);
    results.push_back(a*b*c);
    results.push_back((a+b)*c);
    results.push_back((a*b)+c);
    results.push_back(a+(b*c));
    results.push_back(a*(b+c));

    int finalResult = 0;
    for(int i = 0; i < results.size(); i++){
        if(results[i] > finalResult) finalResult = results[i];
    }
    
    cout << finalResult << endl;
}