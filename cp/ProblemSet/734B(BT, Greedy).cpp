//https://codeforces.com/problemset/problem/734/B
#include <iostream> 
#include <set>
using namespace std;
 
int main() {
    set<int> mySet; 
    int k2,k3,k5,k6;
    cin >> k2 >> k3 >> k5 >> k6; //0 5000000 5000000 5000000
    int k256 = 0;
    int k32 = 0;

    while(k2 > 0 && k5 > 0 && k6){
        //cout << "k2: " << k2 << endl;
        k256++;
        k2--;
        k5--;
        k6--;
    }

    while(k2 > 0 && k3 > 0){
        k32++;
        k2--;
        k3--;
    }

    //cout << "2: " << k2 << endl;

    int result = k256 * 256 + k32 * 32;
    cout << result << endl;

}