//https://codeforces.com/problemset/problem/228/A
#include <iostream> 
#include <set>
using namespace std;
 
int main() {
    set<int> mySet;
    int n = 4;

    int ins;
    for(int i = 0; i < n; i++){ cin >> ins; mySet.insert(ins); }

    int result; result = n - mySet.size();
    cout << result << endl;
}